#include <iostream>
using namespace std;



//PRACTICA SENCILLA
//funciones
int suma(int numero1, int numero2){
	
	return numero1 + numero2;
}

int resta(int numero1, int numero2){
	
	return numero1 - numero2;
}

int multiplicacion(int numero1, int numero2){
	
	return numero1 * numero2;
}

//HICE UNA FUNCION PARA CADA OPERACION YA QUE NO PUDE ALMACENAR LOS RESULTADOS EN UN ARRAY Y HACER QUE PUDIERAN GUARDARSE EN UNA VARIABLE PARA PODER PRESENTARLOS DESPUES
//YA HECHAS 1 FUNCION PARA CADA OPERACION ES MAS FACIL PODER LLAMARLAS DESPUES

//codigo principal
int main(){
	int numero1, numero2;
	
	cout<<"Escribe el valor del primero numero: ";
	cin>>numero1;
	cout<<"Escribe el valor del segundo numero: ";
	cin>>numero2;
	//aqui mando a llamar a todas la funciones dependiendo que hara cada una, y les pongo commo parametros los numeros ingresados antes
	cout<<"La suma es: "<<suma(numero1,numero2)<<" la multiplicacion es: "<<multiplicacion(numero1,numero2)<<" la resta es de: "<<resta(numero1,numero2);

	return 0;
}
