#include <iostream>
#include <windows.h>                      
#include <iostream>                      
#include <conio.h>                       

using namespace std;                     

int gotoxy(USHORT x,USHORT y){                                  
COORD cp={x,y};                                                 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cp);   
}

using name space std;
//ESTRUCTURA CARRO
struct CARRO{
char placa[6];
char modelo[20];
char color[20];
int puertas;
float valorparqueocarro=1000;//1000 pesos por hora
}

//ESTRUCTURA PERSONA
struct MOTOCICLETAS{
char placa[6];
char modelo[20];
char color[20];
float valorparqueomoto=500;//500 pesos por hora
}

//ESTRUCTURA PERSONA
struct PERSONA{
char nombre[40];
char apellido[40];
char sex;
long id;
//obtener fecha de ingreso
//obtener fecha de salida
float pago;
}

//ESTRUCTURA SITIO APARACADO
struct SITIONORMAL{
char tipo [20];
}

//ESTRUCTURA SITIO APARCADO PREMIUM
struct SITIOVIP{
char tipo[20];
float encargo;
}

int main(){
	
}
