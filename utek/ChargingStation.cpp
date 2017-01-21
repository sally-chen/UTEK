#include "ChargingStation.h"

ChargingStation::ChargingStation()
{
    //nothing here
}

ChargingStation::ChargingStation(Pair _p, string _name, string _city, int _id)
{
    p = _p;
    name = _name;
    city = _city;
    id = _id;
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

void ChargingStation::setPair(Pair _p)
{
    p = _p;
}

void ChargingStation::setName(string _name)
{
    name = _name;
}

void ChargingStation::setCity(string _city)
{
    city = _city;
}

void ChargingStation::setID(int _id)
{
    id = _id;
}


