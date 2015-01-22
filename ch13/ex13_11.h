//
//  ex13_11.h
//  CP5
//
//  Created by pezy on 1/13/15.
//  Copyright (c) 2015 pezy. All rights reserved.
//
//  Add a destructor to your HasPtr class from the previous exercises. 
//
//  See ex13_08.h 

#ifndef CP5_ex13_11_h
#define CP5_ex13_11_h

#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &hp) : ps(hp.ps), i(hp.i) { }
    HasPtr& operator=(const HasPtr &hp) {
        ps = hp.ps;
        i = hp.i;
        return *this;
    }
    ~HasPtr() {
        delete ps;
    }
private:
    std::string *ps;
    int i;
};

#endif
