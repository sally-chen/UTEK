/* 
 * File:   MyParser.h
 * Author: Harry
 *
 * Created on January 21, 2017, 2:53 PM
 */

#ifndef MYPARSER_H
#define	MYPARSER_H

#include "json11.hpp"
#include <string>


class MyParser {
public:
    enum ParserError {
        SUCCESS=0,
        IOError,
        JsonError
    };
    MyParser();
    ~MyParser();
    
    static ParserError getFuelStationVector(std::string filePath);
    
private:
    
};

#endif	/* MYPARSER_H */

