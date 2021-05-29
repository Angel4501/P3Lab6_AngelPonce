#ifndef JPG_H
#define JPG_H
#include<string>
#include "Archivo.h"
#include<iostream>
#include<sstream>
using namespace std;

class JPG : public Archivo
{
	private:
		bool conFlash;
		string resolucion;
		double largo;
		double ancho;
		
	public:
		JPG();
		JPG(bool,string,double,double);
		virtual string toString();
	protected:
};

#endif