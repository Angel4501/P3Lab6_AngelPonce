#ifndef FILESYSTEMNODE_H
#define FILESYSTEMNODE_H
#include<string>
using namespace std;

class FileSystemNode
{
	private:
		string nombre;
		string autor;
		FileSystemNode* padre;
		
	public:
		FileSystemNode();

		
		FileSystemNode(string,string,FileSystemNode*);//constructor sobrecargado
		virtual string toString()=0;
	protected:
};

#endif