/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pair.h
 * Author: sally090230
 *
 * Created on January 21, 2017, 1:55 PM
 */

#ifndef PAIR_H
#define PAIR_H
class Pair{
public:
    double lattitude;
    double longitude;
    Pair();
    Pair(double _long, double _latt);
    Pair& operator=(const Pair &rhs);
};


#endif /* PAIR_H */

