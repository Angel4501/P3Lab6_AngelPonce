#include "JPG.h"

JPG::JPG()
{
}

JPG::JPG(bool f, string r, double l, double a){
	conFlash = f;
	resolucion = r;
	largo = l;
	ancho = a;
}

string JPG::toString(){
	ostringstream out;
	out << largo;
	ostringstream out1;
	out1 << ancho;
	if(conFlash){
		string y = "Si tiene flash";
	}
	else{
		string y = "No tiene flash";
	}
	return conFlash+"; Resolución: "+resolucion+"; Largo: "+out.str()+"; Ancho: "+out1.str();
}