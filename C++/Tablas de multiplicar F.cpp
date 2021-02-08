#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	int numero, contador, tabla;//asigno el valor de integral a las constantes numero, contadot y tabla
	char continuar;//a continuar le asigno el valor de char para que me acepte letras como variable
	continuar='s';//a continuar le asigno el valor de "s"
	while (continuar=='s'){//inicio el ciclo de while o mientras, donde todo se repetira mientras continuar sea igual a "s"
		cout << "¿Que tabla de multiplicar te gustaria ver? \n";//aparece un mensaje donde pregunta cual es el numero que multiplicara para saber las tablas
		cin >>numero;//lee el numero y le asigna el nombre de "numero"
		for(contador =0;contador<11; contador+=1)//inicia el proceso para donde contador es igual a cero, y hara la cuenta hasta 11, dando saltos en contador de uno en uno
		{//inicia el proceso para
				tabla=numero*contador;//hago la multiplicacion para que sepa el resultado, esta la llame tabla
				cout<< numero << " x "<< contador<< "="<< tabla<< "\n";//aparece un mensaje donde primero aparece el numero que ingreso antes luego entre comillas aparece una x
				//despues aparece el contador que realiza la cuenta de 0 hacia adelante, despues aparece un igual entre comillas y muestra los resultados segun la multiplicacion 
				//del numero por el contador, segun como corresponda
		}//ciero el proceso para
		cout<< "Quieres continuar (s/n)? ";//aparece un mensaje donde pregunta si quiere continuar
		cin>> continuar;//da la respuesta, esta se llamara continuar, como anteriormente ya le di el valor a continuar de "s" solo hay una respuesta verdadera la cual es "s"
 	}//cierra el proceso while, dependiendo de la respuesta en continuar, se repetira todo lo que esta dento de while hasta aqui o no se repetira nada, segun la respuesta
	return 0;
}
