#include "Directorio.h"

Directorio::Directorio()
{
}

Directorio::Directorio(string a, string n, FileSystemNode* f) : FileSystemNode(a,n,f){
	
}

Directorio::~Directorio()
{
}

void Directorio::agregarDirectorio(FileSystemNode* fsnd){ //agregando directorio
	hijos.push_back(fsnd);
}

void Directorio::agregarArchivo(FileSystemNode* fsna){ //agregando archivo
	hijos.push_back(fsna);
}

string Directorio::toString(){
	/*string salida="";
	for(int i=0; i<hijos.size(); i++){
		salida+=hijos[i]->toString();
	}*/
}

