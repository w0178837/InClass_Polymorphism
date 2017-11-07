//
// Created by inet2005 on 11/7/17.
//

#ifndef INCLASS_POLYMORPHISM_VEHICLE_H
#define INCLASS_POLYMORPHISM_VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
public:
    Vehicle() = default;

    virtual ~Vehicle() = default;

    virtual string blowHorn();

};


#endif //INCLASS_POLYMORPHISM_VEHICLE_H
