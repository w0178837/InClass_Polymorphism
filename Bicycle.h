//
// Created by inet2005 on 11/7/17.
//

#ifndef INCLASS_POLYMORPHISM_BICYCLE_H
#define INCLASS_POLYMORPHISM_BICYCLE_H

#include <string>
#include "Vehicle.h"

class Bicycle : public Vehicle {

public:
    Bicycle();
    virtual ~Bicycle();

    virtual string blowHorn();
};


#endif //INCLASS_POLYMORPHISM_BICYCLE_H
