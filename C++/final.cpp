#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero, contador, tabla;
	char conti;
	conti='s';
	while (conti=='s'){
		cout << "Que tabla de multiplicar te gustaria ver? \n";
		cin >>numero;
		for(contador = 0;contador>=10; contador)
		{
				tabla=numero*contador;
				cout<< numero << " x "<< contador<< "="<< tabla<< "\n";
		}
		cout<< "Quieres continuar (s/n)? ";
		cin>> conti;
		contador=10;
 	}
	return 0;
}

