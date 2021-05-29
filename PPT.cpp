#include "PPT.h"

PPT::PPT()
{
}

PPT::PPT(string t, int s, int p, bool a){
	titulo = t;
	numSlides = s;
	numPlantilla = p;
	animaciones = a;
}

string PPT::toString(){
	string ani;
	if(animaciones){
		ani="si tiene animaciones";
		
	}
	else{
		ani = "no tiene animaciones";
	}
	ostringstream out, out1;
	out << numSlides;
	out1 << numPlantilla;
	return titulo+"; "+out.str()+"; "+out1.str()+"; "+ani;
}