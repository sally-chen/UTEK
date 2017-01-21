/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Search.cpp
 * Author: sally090230
 * 
 * Created on January 21, 2017, 2:18 PM
 */

#include "Search.h"

vector<ChargingStation> Search::search_array(Pair input, const vector<ChargingStation> & stations){
    //shortest to largest
    double distance;
    vector<pair<ChargingStation,double>> lowestThree(3);
    
    int count = 0;
    
    for (auto iter = stations.begin(); iter != stations.end(); ++iter){
        //calculate the distance from input to each station
        //compare with rach of the ebtries
        distance = calcDis(input,iter->getPair());
        
        if (count < 3) {
            lowestThree[count].first = *iter;
            lowestThree[count].second = distance;
        }
        else if(distance < lowestThree[2].second){
            cout<<distance<<endl;
            lowestThree[2].first = *iter;
            lowestThree[2].second = distance;
            sort(lowestThree);
        }
        ++count;
    }
    sort(lowestThree);
    
    for (auto iter = lowestThree.begin(); iter != lowestThree.end(); ++iter){
        cout << (iter->first.getPair()).lattitude << " "<<(iter->first.getPair()).longitude<<" "<<iter->first.getName()<<" - "<<iter->second<<endl;
                
    }
}
double Search::calcDis(Pair point1, Pair point2){ 
  double lat1r, lon1r, lat2r, lon2r, u, v;
  lat1r = toRadians(point1.lattitude);
  lon1r = toRadians(point1.longitude);
  lat2r = toRadians(point2.lattitude);
  lon2r = toRadians(point2.longitude);
  u = sin((lat2r - lat1r)/2);
  v = sin((lon2r - lon1r)/2);
  return 2.0 * R * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));
}

double Search::toRadians(double degree){
    return ( degree * PI ) / 180;
}

void Search::sort(vector<pair<ChargingStation,double>> & lowestThree){
    if(lowestThree[0].second > lowestThree[1].second){
        swap(lowestThree[0],lowestThree[1]);        
    }
    
    if(lowestThree[1].second > lowestThree[2].second){
        swap(lowestThree[1],lowestThree[2]);        
    }
}


