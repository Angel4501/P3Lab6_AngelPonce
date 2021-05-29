#ifndef ARCHIVO_H
#define ARCHIVO_H
#include<string>
#include "FileSystemNode.h"
using namespace std;

class Archivo : public FileSystemNode
{
	public:
		virtual string toString()=0;
		Archivo();
		Archivo(string,string,FileSystemNode*);
	protected:
};

#endif
#ifndef ARCHIVO_H
#define ARCHIVO_H

class Archivo
{
	public:
	protected:
};

#endif