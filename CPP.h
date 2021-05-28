#ifndef CPP_H
#define CPP_H
#include<string>
#include "Archivo.h"
using namespace std;

class CPP : public Archivo
{
	private:
		int lineasCodigo;
		int numErrores; 
	public:
		CPP();
		CPP(int,int);
		virtual string toString();
	protected:
};

#endif