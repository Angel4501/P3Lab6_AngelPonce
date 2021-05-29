#ifndef CPP_H
#define CPP_H
#include<string>
#include<sstream>
#include "Archivo.h"
#include "FileSystemNode.h"
using namespace std;

class CPP : public Archivo
{
	private:
		stringstream out;
		stringstream out1;
		int lineasCodigo;
		int numErrores; 
	public:
		CPP();
		CPP(int,int);
		virtual string toString();
	protected:
};

#endif