/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Pair.h"

Pair::Pair() {
    // do nothing
}

Pair::Pair(double _long, double _latt) : longitude(_long),lattitude(_latt){

}
Pair& Pair::operator=(const Pair &rhs){
    longitude = rhs.longitude;
    lattitude = rhs.lattitude;
}
