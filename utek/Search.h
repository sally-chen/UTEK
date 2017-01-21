/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Search.h
 * Author: sally090230
 *
 * Created on January 21, 2017, 2:18 PM
 */
#include <iostream>
#include <vector>
#include <math.h>
#include <utility>
#include "Pair.h"
#include "ChargingStation.h"
#define R 6378.137
#define PI 3.1415926



using namespace std;
#ifndef SEARCH_H
#define SEARCH_H

class Search{
public:
//    
//    Pair input_points; 
//    vector<int> stations;
    vector<ChargingStation> search_array(Pair, const vector<ChargingStation> & );
    double calcDis(Pair, Pair);
    double toRadians(double);
    void sort(vector<pair<ChargingStation,double>> & lowestThree);
private:
    

};

#endif /* SEARCH_H */

