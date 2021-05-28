#ifndef JPG_H
#define JPG_H
#include<string>
#include "Archivo.h"
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
		virtual string toString();
	protected:
};

#endif