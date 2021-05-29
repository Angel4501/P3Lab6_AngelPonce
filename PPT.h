#ifndef PPT_H
#define PPT_H
#include<sstream>
#include "Archivo.h"
#include<iostream>
using namespace std;

class PPT : public Archivo
{
	private:
		
		string titulo;
		int numSlides;
		int numPlantilla;
		bool animaciones; //si tiene animaciones o no
	public:
		virtual string toString();
		PPT();
		PPT(string,int,int,bool);
	protected:
};

#endif