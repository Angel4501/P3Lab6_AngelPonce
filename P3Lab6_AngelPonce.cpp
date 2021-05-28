#include <iostream>
using namespace std;

int menu();//Función menú

int main(int argc, char** argv) {
	int opcion=0;
	int a = 0;
	while(a!=5){
		switch(a = menu()){
			case 1:{
				
				break;
			}	
			case 2:{
					
				break;
			}	
			case 3:{
				
				break;
			}	
			case 4:{
				int p=0;
				 //peliculas.erase(peliculas.begin()+p);
				break;			
			}
			case 5:{

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
	while(opc!=8){
		cout<<"MENU"<<endl
		<<"1. Imprimir FileSystem"<<endl //ya
		<<"2. Agregar DIrectorios"<<endl //ya
		<<"3. Agregar Archivos"<<endl
		<<"4. Buscar por nombre"<<endl
		<<"5. Salir"<<endl
		<<"Opcion: ";
		cin>>opc;
		if(opc>=1&&opc<=8){
			break;
		}
		else{
			cout<<"Opcion no valida, ingresela nuevamente"<<endl;
		}			
   }
   return opc;	
}//fin de la funcion menu