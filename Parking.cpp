#include <iostream>
#include <windows.h>                      
#include <iostream>                      
#include <conio.h>                       
//IMPORTAMOS LAS LIBRERIAS NECESARIAS
using namespace std;                     

//DECLARAMOS NUESTRAS FUNCIONES
void menu();
void REGISTRARCARRO();
void REGISTRARMOTO();
void REGISTRARPERSONA();
void AGREGARPUESTO();
void CONSULTARPUESTOCU();
void ELIMINARPUESTO();
void IMPRIMIRFAC();
void CONSULTARPUESTOSDISPO();
//FIN DECLARACION FUNCIONE
int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}
//ESTRUCTURA CARRO
struct CARRO{
char placa[6];
char modelo[20];
char color[20];
int puertas;
float valorparqueocarro;//1000 pesos por hora
};
//ESTRUCTURA PERSONA
struct MOTOCICLETAS{
char placa[6];
char modelo[20];
char color[20];
float valorparqueomoto;//500 pesos por hora
};

//ESTRUCTURA PERSONA
struct PERSONA{
char nombre[40];
char apellido[40];
char direccion[40];
char sex;
long id;
char placa[6];
//obtener fecha de ingreso
//obtener fecha de salida
float pago;
};

//ESTRUCTURA SITIO APARACADO
struct SITIONORMAL{
char tipo [20];
};


int main(){
	menu();
}


void menu(){
gotoxy(20,1);cout<<"Bienvenidos a PARKING";
system("color F0");
char op='s';
int opc;
	gotoxy(20,5);cout<<"Bienvenidos a Menu";
	gotoxy(20,6);cout<<"1.Registrar Carro";
	gotoxy(20,7);cout<<"2.Registrar Motocicleta";
	gotoxy(20,8);cout<<"3.Registrar Persona";
	gotoxy(20,9);cout<<"4.Agregar puesto de parqueo";
	gotoxy(20,10);cout<<"5.Consultar puestos disponibles";
	gotoxy(20,11);cout<<"6.Consultar puestos ocupados";
	gotoxy(20,12);cout<<"7.Eliminar puesto de parqueo";
	gotoxy(20,13);cout<<"8.Imprimir Factura";
	gotoxy(20,14);cout<<"Digite opcion";
    gotoxy(33,14);cin>>opc;


switch(opc){
	case 1: REGISTRARCARRO();
	break;
	case 2: REGISTRARMOTO();
	break;
	case 3: REGISTRARPERSONA();
	break;
	case 4: AGREGARPUESTO();
	break;
	case 5: CONSULTARPUESTOSDISPO();
	break;
	case 6: CONSULTARPUESTOCU();
	break;
	case 7: ELIMINARPUESTO();
	break;
	case 8: IMPRIMIRFAC();
	break;
	
}

}
void REGISTRARCARRO(){
	system("color E8");
	cout<<"exito"<<endl;
}

void REGISTRARMOTO(){
	system("color A2");
	cout<<"exito"<<endl;
}
void REGISTRARPERSONA(){
	system("color C0");
	cout<<"exito"<<endl;
}
void AGREGARPUESTO(){
	system("color B0");
	cout<<"exito"<<endl;
}

void CONSULTARPUESTOSDISPO(){
	system("color F1");
	cout<<"exito"<<endl;
}

void  CONSULTARPUESTOCU(){
	system("color F2");
	cout<<"exito"<<endl;
}

void ELIMINARPUESTO(){
	system("color F3");
	cout<<"exito"<<endl;
}

void IMPRIMIRFAC(){
	system("color F5");
	cout<<"exito"<<endl;
}
