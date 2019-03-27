#include "platypus.h"

Platypus::Platypus(){
	FarmAnimal::egg = true;
	FarmAnimal::milk = true;
	FarmAnimal::meat = false;
}

//prosedur Bersuara menuliskan suara Platypus ke layar
void Platypus::bersuara(){
	cout << "krrrrrrr..." << endl;
}
FarmProduct Platypus::getProduct(){
	if (hasProduct){
		hasProduct = false;
		int x = rand() % 2;
		if (x == 0){
			PlatypusMilk milk;
			return milk;
		}
		else{
			PlatypusEgg egg;
			return egg;
		}
	}
	else{
		throw "Platypus ini tidak mempunyai produk saat ini";
	}
}
char Platypus::render(){
	return 'P';
}