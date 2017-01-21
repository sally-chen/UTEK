/* Simple class for charging stations including:
 *      (Latitude, Longitude) Pair
 *      Name of the station
 *      City
 *      ID
 * Accessor and Mutator functions are provided
 */



#ifndef CHARGINGSTATION_H
#define CHARGINGSTATION_H


#include <string>
#include <cstdlib>
#include "Pair.h"


using namespace std;

class ChargingStation
{
    public:
        ChargingStation();
        ChargingStation(Pair _p, string _name, string _city, int _id);
        ~ChargingStation();

        // accessor functions
        Pair getPair();
        string getName();
        string getCity();
        int getID();

        // mutator functions
        void setPair(Pair _p);
        void setName(string _name);
        void setCity(string _city);
        void setID(int _id);

    private:
        Pair p;
        string name;
        string city;
        int id;
};

#endif // CHARGINGSTATION_H
