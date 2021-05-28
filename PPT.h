#ifndef PPT_H
#define PPT_H
#include<string>
#include "Archivo.h"
using namespace std;

class PPT : public Archivo
{
	string titulo;
	int numSlides;
	int numPlantilla;
	bool animaciones; //si tiene animaciones o no
	public:
		virtual string toString();
		PPT();
	protected:
};

#endif