#include "FileSystemNode.h"

FileSystemNode::FileSystemNode()
{
}

FileSystemNode::FileSystemNode(string _nombre, string _autor, FileSystemNode* _file){
	this->nombre = _nombre;
	this->autor = _autor;
	this->padre = _file;
}







