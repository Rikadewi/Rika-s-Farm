//File : truck.h
#ifndef truck_H
#define truck_H

#include "facility.h"

class Truck : public Facility{
public:
    char render();
private:
    int tick;
};
#endif
