/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sally090230
 *
 * Created on January 21, 2017, 1:31 PM
 */

#include <cstdlib>
#include "MyParser.h"
#include "ChargingStation.h"
#include "Search.h"
#include <vector>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double latt,longi;
    cout <<"enter latt and longi"<<endl;
    cin >> latt >> longi; 
    Pair input(longi,latt);
    
    //go through the entire list of charging stations, calculate the spherical distance between each point to current point 
    //get the three entries with the smallest distances
    
    //list will be 1D array of object
    
    std::vector<ChargingStation> array;
    MyParser::getFuelStationVector("charging_stations.json", array);
    
    Search s;
    s.search_array(input, array);
//    for (auto iter = array.begin(); iter != array.end(); ++iter){
//        std::cout << iter->getID() << " " << iter->getName() << std::endl;
//    }
    return 0;
}

