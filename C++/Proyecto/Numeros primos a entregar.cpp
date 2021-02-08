#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char continuar;
	continuar='s';
	int numerito, contador;

	cout<<"Bienvenido a la comprobadora de numeros primos\n";
	cout<<"Digitiza un numero y te diremos si es primo o no\n";
	while (continuar=='s'){
		cout<<"Por favor digita un numero: \n";
		cin>>numerito;
		contador=0;
		for (int i=1;i<=numerito;i+=1){
			if ((numerito%i)==0){
				contador=contador+1;
				}
				}
		if (contador==2){
			cout<< "Tu numero es un numero primo";}
		else{
		
			cout<< "Tu numero no es un numero primo";
		}
	cout<<"\n¿Deseas calcular otro numero? (s/n): ";
	cin>>continuar;		
	}
	
	
	
	return 0;
}
