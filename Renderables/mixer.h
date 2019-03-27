//File : mixer.h
#ifndef mixer_H
#define mixer_H

#include "facility.h"
#include "../Product/sideproduct.h"
#include "../Product/chickenegg.h"
#include "../Product/platypusegg.h"
#include "../Product/chickenmeat.h"
#include "../Product/cowmeat.h"
#include "../Product/cowmilk.h"
#include "../Product/platypusmilk.h"

//mixer merupakan turunan dari facility
class Mixer : public Facility{
public:
    char render(); //mengembalikan char yang akan diprint pada map
    SideProduct mix(ChickenEgg* , CowMeat*); //menghasilkan beefomellete, mengurangi jumlah ChickenEgg dan CowMeat masing-masing satu.
    SideProduct mix(PlatypusEgg* , CowMilk*); //menghasilkan platycow pancake, mengurangi jumlah PlatypusEgg dan CowMilk masing-masing satu
    SideProduct mix(ChickenMeat* , PlatypusMilk*); //menghasilkan plachick soup, mengurangi jumlah PlatypusMilk dan ChickenEgg masing-masing satu.
};

#endif
