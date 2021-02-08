#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	
int numero, resultado, limite, salto;
char continuar;
continuar='s';
	
cout<< "Bienvenido a la calculadora de tablas de mltiplicar\n";

while (continuar=='s'){
	cout<<"Dame el numeo del cual quieres saber la talba: ";
	cin>>numero;
	cout<<"\nAhora ocupo sabeer hasta que numero quieres conocer la tabla: ";
	cin>>limite;
	cout<<"\nY por ultimo de que forma quieres que se den los saltos: ";
	cin>>salto;
	for (int i=0; i<=limite; i+=salto){
		resultado= numero * i;
		cout<< i <<" x "<<numero<<" = "<<resultado<< "\n";
	}
	cout<< "Quieres continuar (s/n)? ";
	cin>> continuar;
		
		
	}
	return 0;
}
