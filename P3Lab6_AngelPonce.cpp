#include <iostream>
#include "FileSystem.h"
#include "CPP.h"
#include "JPG.h"
#include "PPT.h"
#include "Directorio.h"
#include "Archivo.h"
#include<string>
using namespace std;

int menu();//Función menú
int equals(string,string);

int main(int argc, char** argv) {
	int opcion=0;
	int a = 0;
	FileSystem* file = new FileSystem();
	
	//Agregando en duro
	Directorio* carpeta1 = new Directorio("Musica","Carlos",file->getRoot());
	carpeta1->agregarArchivo(new CPP(50,2));
    carpeta1->agregarArchivo(new JPG(false,"200x300",30,40));
	carpeta1->agregarArchivo(new CPP(50,2));
	
	file->getRoot()->agregarDirectorio(carpeta1);

	Directorio* carpeta2 = new Directorio("Juegos","James",carpeta1);
	carpeta2->agregarArchivo(new CPP(50,2));
    carpeta2->agregarArchivo(new JPG(true,"200x300",30,40));
	carpeta2->agregarArchivo(new CPP(50,2));
	
	Directorio* carpeta3 = new Directorio("Libros","Martin",carpeta2);
	carpeta3->agregarArchivo(new CPP(50,2));
    carpeta3->agregarArchivo(new JPG(false,"200x300",30,40));
	carpeta3->agregarArchivo(new CPP(50,2));	
	
	carpeta1->agregarDirectorio(carpeta2);
	
	carpeta2->agregarDirectorio(carpeta3);
	//Fin de agregar enduro
	
	while(a!=5){
		switch(a = menu()){
			case 1:{
				cout<<"Imprimir todo el FileSystem..."<<endl;
				
				break;
			}	
			case 2:{
				string nombre,autor;
				cout<<"Ingrese nombre: ";
				cin.ignore();
				getline(cin,nombre);
				cout<<"Ingrese autor: ";
				getline(cin,autor);
				file->getRoot()->agregarDirectorio(new Directorio(autor,nombre,file->getRoot()));
				cout<<"Se agrego el directorio a la raiz!"<<endl;
				break;
			}	
			case 3:{
				int opc=0;
				cout<<"Agregar Archivos";
				cout<<"1. CPP"<<endl
				<<"2. JPG"<<endl
				<<"3. PPT"<<endl
				<<"Opicon: ";
				cin>>opc;
				switch(opc){
					case 1:{
						//CPP
						string nombre,autor;
						cout<<"Ingrese nombre: ";
						cin.ignore();
						getline(cin,nombre);
						cout<<"Ingrese autor: ";
						getline(cin,autor);
						
						int lines=0, errors=0;
						cout<<"Ingrese linea de codigo: ";
						cin>>lines;
						cout<<"Ingrese numero de errores: ";
						cin>>errors;
						file->getRoot()->agregarArchivo(new CPP(lines,errors));
						break;
					}
					case 2:{
						//JPG
						string nombre,autor;
						cout<<"Ingrese nombre: ";
						cin.ignore();
						getline(cin,nombre);
						cout<<"Ingrese autor: ";
						getline(cin,autor);
						
						string flash, res; bool f; double largo, ancho;
						cout<<"Tiene flash? [s/n]: ";
						cin>>flash;
						if(equals(flash,"s")==0){
							f=true;
						}
						else{
							f=false;
						}
						cout<<"Ingrese resolucion: ";
						cin>>res;
						cout<<"Ingrese largo: ";
						cin>>largo;
						cout<<"Ingrese ancho: ";
						cin>>ancho;
						file->getRoot()->agregarArchivo(new JPG(f,res,largo,ancho));
						break;
					}
					case 3:{
						//PPT
						string nombre,autor;
						cout<<"Ingrese nombre: ";
						cin.ignore();
						getline(cin,nombre);
						cout<<"Ingrese autor: ";
						getline(cin,autor);
						
						string titulo; 
						char a; 
						bool animaciones=false; 
						int slides=0; 
						int plantilla=0;
						cout<<"Ingrese titulo: ";
						cin.ignore();
						getline(cin,titulo);
						cout<<"Tiene animaciones? [s/n]: ";
						cin>>a;
						if(a=='s'){
							animaciones=false;
						}
						else if(a=='n'){
							animaciones=true;
						}
						cout<<"Numero de slides: ";
						cin>>slides;
						cout<<"Numero de plantillas: ";
						cin>>plantilla;
						file->getRoot()->agregarArchivo(new PPT(titulo,slides,plantilla,animaciones));
						break;
					}
					default:{
						cout<<"Opcion invalida ... Saliendo ..."<<endl;
						break;
					}
				}
				break;
			}	
			case 4:{
				
				 //peliculas.erase(peliculas.begin()+p);
				break;			
			}
			case 5:{
				cout<<"Salio con exito..."<<endl;
				break;			
			}
			default: 
				cout<<"Opcion no valida, ingresela nuevamente"<<endl;
	    }
   }//FIN DEL WHILE
	return 0;
}

int menu(){//funcion menu
	int opc=0;
	while(opc!=5){
		cout<<"MENU"<<endl
		<<"1. Imprimir FileSystem"<<endl //ya
		<<"2. Agregar Directorios"<<endl //ya
		<<"3. Agregar Archivos"<<endl
		<<"4. Buscar por nombre"<<endl
		<<"5. Salir"<<endl
		<<"Opcion: ";
		cin>>opc;
		if(opc>=1&&opc<=5){
			break;
		}
		else{
			cout<<"Opcion no valida, ingresela nuevamente"<<endl;
		}			
   }
   return opc;	
}//fin de la funcion menu

int equals(string x, string y){
	if(x.length() > y.length() || x.length() < y.length()){
		return 1;
	} 
	else{
		bool lol = false;
		for(int i=0 ; i<x.length(); i++){
			if(x[i]==y[i]){
				lol = true;
			}
			else{
				lol = false;
				break;	
			}
		}
		if(lol){
			return 0;
		}
		else{
			return 1;
		}
	}
}
