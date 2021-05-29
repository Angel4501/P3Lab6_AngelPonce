#include "FileSystem.h"

FileSystem::FileSystem()
{
	this->root = new Directorio("Raiz","Angel",NULL);//Propietario
}

FileSystem::~FileSystem()
{
	delete root;
}

Directorio* FileSystem::getRoot(){
	return this->root;
}