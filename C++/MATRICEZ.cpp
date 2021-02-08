#include <iostream>
#include <conio.h>
using namespace std;
//como hacer una matriz
int main(){
	int numeros[100][100], filas, columnas;//determino la matriz y las filas y columnas
	//determino la matriz y los limites que esta tendra, en este caso 100 filas y 100 columnas
	cout<<"Digita el numero de filas: ";
	cin>>filas;//entran el numero de las filas
	cout<<"Digita el numero de columnas: ";
	cin>>columnas;//entran el numero de columnas
	
	//Almacenando elementos en la matriz
	for (int i=0; i<filas; i++){//este for es para las filas
		for(int j=0; j<columnas; j++){//y este para las columnas
			cout<<"Digita un numero ["<<i<<"]["<<j<<"]: ";//pido que digite un numero y muestro las coordenadas donde se guardara segun el i and j
			cin>>numeros[i][j];//entra el numero y lo guardo en la matriz numeros y lo guardo en las coordenadas i and j
		}
	}//cada for ira aumentando hasta que se cumpla algunas de las condiciones para que no siga aumentando, en este caso, las columnas y filas que se pidieron al inicio
	
	//mostrando la matriz
	for(int i=0;i<filas;i++){//igual, para las filas
		for(int j=0;j<columnas;j++){//para las columnas
			cout<<numeros[i][j] <<" ";//muestro la matriz y doy un espacio entre cada elemento para que sea más estetico
		}
		cout<<endl;//salto de linea para que no se apilen en un solo renglon la matriz
    }	
	getch();//no se pa que sea este
	return 0;//final del programa
}
