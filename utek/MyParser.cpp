/* 
 * File:   MyParser.cpp
 * Author: Harry
 * 
 * Created on January 21, 2017, 2:53 PM
 */

#include "MyParser.h"
#include <fstream>
#include <iostream>

MyParser::MyParser() {
    // nothing
}

MyParser::~MyParser() {
    // nothing
}

MyParser::ParserError MyParser::getFuelStationVector(std::string filePath,
        std::vector<ChargingStation>& array) {
    array.clear();
    
    // read json string from file
    std::ifstream test (filePath);
    std::string jsonString;
    if (!test.is_open()) {
        return IOError;
    }
    std::string line;
    while (getline(test, line)) {
        jsonString += line;
    }
    
    // parse json string
    std::string err;
    json11::Json json = json11::Json::parse(jsonString, err);
    if (!err.empty()) {
        std::cout << err << std::endl;
        return JsonError;
    }
    
    // get fuel stations
    json11::Json fuel_stations = json["fuel_stations"];
    if (!fuel_stations.is_array()) {
        std::cout << "Not an array of fuel stations" << std::endl;
        return JsonError;
    }
    
    // populate vector with fuel stations
    json11::Json::array items = fuel_stations.array_items();
    for (auto iter = items.begin(); iter != items.end(); ++iter) {
        int id = (int) ((*iter)["id"].number_value());
        double lat = (*iter)["latitude"].number_value();
        double lon = (*iter)["longitude"].number_value();
        std::string name = (*iter)["station_name"].string_value();
        std::string city = (*iter)["city"].string_value();
        
        Pair newLatLon (lon, lat);
        ChargingStation newStation (newLatLon, name, city, id);
        array.push_back(newStation);
    }
}
