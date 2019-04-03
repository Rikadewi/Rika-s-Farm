//File : cell.h
#ifndef CELL_H
#define CELL_H

#include "../../LivingThings/Header/farmanimal.h"

enum CellType {land, facility};

class Cell{
    private:
        CellType type;
    public:
        //0 untuk out of bound
        //1-12 untuk farm animal (ganjil laper, genap kenyang)
        //egg and milk producing? ada brpa?
        //1-2 Chicken Kampung -- egg, meat
        //3-4 ChickenJago -- Meat
        //5-6 Cow -- milk, meat
        //7-8 Golden Platypus -- egg,milk
        //9-10 Platypus -- egg,milk
        //11-12 Bull -- Meat
        //13-18 untuk land (ganjil tdk berumput, genap berumput)
        //13-14 Barn
        //15-16 Coop
        //17-18 GrassLand
        //19-21 untuk facility
        //19 untuk well
        //20 untuk mixer
        //21 untuk truck
        //22 untuk player
        virtual int render() = 0;
        CellType getType();
        void setType(CellType);
        virtual FarmAnimal* getAnimal() = 0;
        
        //throw "Can't set Facility" jika type cell facility
        virtual void setAnimal(FarmAnimal*) = 0;
};

#endif
