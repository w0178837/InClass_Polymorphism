//
// Created by inet2005 on 11/7/17.
//



#ifndef INCLASS_POLYMORPHISM_BOAT_H
#define INCLASS_POLYMORPHISM_BOAT_H

#include <string>
#include "Vehicle.h"

class Boat : public Vehicle{

public:
    Boat();
    virtual ~Boat();

    virtual string blowHorn();
};


#endif //INCLASS_POLYMORPHISM_BOAT_H
