// File: chickenkampung.h
#ifndef chickenkampung_H
#define chickenkampung_H

#include "farmanimal.h"
#include "chickenegg.h"
#include "chickenmeat.h"

class ChickenKampung : public FarmAnimal{
public:
	//konstruktor mengeset atribut hungry menjadi false dan living_time menjadi default
	ChickenKampung();
	//prosedur Bersuara menuliskan suara ChickenKampung ke layar
	void bersuara();
	FarmProduct getProduct();
	FarmProduct kill();
	char render();
};

#endif
