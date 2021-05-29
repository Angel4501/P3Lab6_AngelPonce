#include "CPP.h"
#include<iostream>
CPP::CPP()
{
}

CPP::CPP(int l, int e){
	lineasCodigo = l;
	numErrores = e;
}

string CPP::toString(){
	
	out << lineasCodigo;
	out1 << numErrores;
	
	return out.str()+"; "+out1.str();
}