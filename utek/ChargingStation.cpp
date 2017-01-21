#include "ChargingStation.h"

ChargingStation::ChargingStation()
{
    //nothing here
}

ChargingStation::ChargingStation(Pair _p, string _name, string _city, int _id)
{
    Pair p = _p;
    string name = _name;
    string city = _city;
    int id = _id;
}

ChargingStation::~ChargingStation()
{
    //nothing here
}

Pair ChargingStation::getPair()
{
    // return the latitude longitude pair
    return p;
}

string ChargingStation::getCity()
{
    // return the city
    return city;
}

string ChargingStation::getName()
{
    // return station name;
    return name;
}

int ChargingStation::getID()
{
    // return station ID
    return id;
}

void setPair(Pair _p)
{
    p = _p;
}

void setName(string _name)
{
    name = _name;
}

void setCity(string _city)
{
    city = _city;
}

void setID(int _id)
{
    id = _id;
}


