#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int respuesta;
	float numero1, numero2, suma, resta, multiplicacion, division;
	char continuar;
	continuar = 's';
	while (continuar=='s'){

	cout<<"Bienvenido a tu calculadora personal\n";
	cout<<"Ahora selecciona alguna de nuestras opciones\n";
	cout<<"Suma (1)\n";
	cout<<"Resta (2)\n";
	cout<<"Multiplicacion (3)\n";
	cout<<"Division (4)\n";
	cin>>respuesta;
	switch (respuesta){
		case 1:
			cout<<"Seleccionaste suma\n";
			cout<<"Ahora necesito que me des el primer numero a sumar: \n";
			cin>>numero1;
			cout<<"Ahora dame el segundo numero: \n";
			cin>>numero2;
			suma = numero1+numero2;
			cout<<"El resultado de tu suma es de: \n"<<suma;
			break;
		case 2: 
			cout<<"Seleccionaste resta \n";
			cout<<"Dame el numero al que le restaras: \n";
			cin>>numero1;
			cout<<"Dame el numero que restaras: \n";
			cin>>numero2;
			resta = numero1-numero2;
			cout<< "El resultado es de: "<<resta;
			break;
		case 3:
			cout<<"Seleccionaste multiplicacion";
			cout<<"Ahora dame el primer numero a multiplicar: \n";
			cin>>numero1;
			cout<<"Ahora dame el segundo numero a multiplicar: \n";
			cin>>numero2;
			multiplicacion = numero1*numero2;
			cout<<"El resultado que obtuvimos es de: "<<multiplicacion;
			break;
		case 4:
			cout<<"Seleccionaste division";
			cout<<"Dame el numero que quieras dividir: \n";
			cin>>numero1;
			cout<<"Ahora dame el dividendo: \n";
			cin>>numero2;
			division=numero1/numero2;
			cout<<"El resultado de la division es de: "<<division;
			break;
		default: 
			cout<<"Syntax error, porfavor elige uno de los valores dados";
			break;}
cout<<"\nDeseas realizar algun otro calculo? (s/n): \n";
cin>>continuar;
	}
	return 0;
}
