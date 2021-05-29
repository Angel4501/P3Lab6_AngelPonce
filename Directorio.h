#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include<vector>
#include "FileSystemNode.h"
class Directorio : public FileSystemNode
{
	private:
		vector<FileSystemNode*> hijos;
	public:
		Directorio();//heredar los 3 datos de FileSystemNode
		Directorio(string,string,FileSystemNode*);
		~Directorio();
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void buscarPorNombre(string);
		virtual string toString();
	protected:
		
};

#endif