#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//AREGGLOS
string tablero[3][3]={{"-","-","-",},{"-","-","-"},{"-","-","-"}};

//FUNCION PARA MOSTRARA EL TABLERO,aqui uso dos fors anidados para poder mostrar mi tablero en forma de matriz 3x3
void mostrar_tablero(){
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<tablero[i][j]<<" ";
			
		}
		cout<<endl;
	}
}

//FUNCION PARA VALIDAR
int validar(string mensaje)
{
    bool bandera = true;
    string dato;
    int valor;
    while (bandera == true)
    {
        cout << mensaje;
        cin >> dato;
        valor = atoi(dato.c_str());//la varible valo la igualo al parceo de la cadena dato a entero
        if (valor != 0)
        {
            bandera = false;
        }
        else{
        	cout<<endl;
            cout << "Solamente se admiten numeros";
            bandera = true;
        }
    }
    return valor;
}


//MOTRAR GANADOR
bool mostrar_ganador(){
	//funcion para determinar ganador, aqui determino a mi ganador insertando todas las maneras posibles de ganar en cordenas, y dependiendo de si hay una X o una O en ese lugar dira quien es el ganador
	//esto gracias al else if que tiene el c++
	bool banderita;
	string ganador;
	banderita=false;
	//para la fila 1
	if (tablero[0][0]=="X" && tablero[0][1]=="X" && tablero[0][2]=="X"){//condicinante de las cordenadas y el valor que debe estar en ellas
		ganador="¡¡¡Gana el jugador X!!!";//guardo en una varible una mensaje del ganador
        banderita=true;//como si hay ganador mi bandera ganador se vuelve verdadera
	}	//hago exacamente lo mismo para todas los demas posibles resultados
	else if (tablero[0][0]=="O" && tablero[0][1]=="O" && tablero[0][2]=="O"){
		ganador="¡¡¡Gana el jugador O!!!";
        banderita=true;
	}
	
	//PARA LA FILA 2
	else if(tablero[1][0]=="X" && tablero[1][1]=="X" && tablero[1][2]=="X"){
		ganador="¡¡¡Gana el jugador X!!!";
        banderita=true;
	}
	else if(tablero[1][0]=="O" && tablero[1][1]=="O" && tablero[1][2]=="O"){
		ganador="¡¡¡Gana el jugador O!!!";
        banderita=true;
	}
	
	//PARA LA FILA 3
	else if(tablero[2][0]=="X" && tablero[2][1]=="X" && tablero[2][2]=="X"){
		ganador="¡¡¡Gana el jugador X!!!";
        banderita=true;
	}
	else if(tablero[1][0]=="O" && tablero[1][1]=="O" && tablero[1][2]=="O"){
		ganador="¡¡¡Gana el jugador O!!!";
        banderita=true;
	}
	
	//PARA LA COLUMNA 1
	else if (tablero[0][0]=="X" && tablero[1][0]=="X" && tablero[2][0]=="X"){
		ganador="¡¡¡Gana el jugador X!!!";
        banderita=true;
	}
	else if (tablero[0][0]=="O" && tablero[1][1]=="O" && tablero[2][2]=="O"){
		ganador="¡¡¡Gana el jugador O!!!";
        banderita=true;
	}
	
	//PARA LA COLUMNA 2
	else if (tablero[0][1]=="X" && tablero[1][1]=="X" && tablero[2][1]=="X"){
		ganador="¡¡¡Gana el jugador X!!!";
        banderita=true;
	}
	else if (tablero[0][1]=="O" && tablero[1][1]=="O" && tablero[2][1]=="O"){
		ganador="¡¡¡Gana el jugador O!!!";
        banderita=true;
	}
	
	//PARA LA COLUMNA 3
	else if (tablero[0][2]=="X" && tablero[1][2]=="X" && tablero[2][2]=="X"){
		ganador="¡¡¡Gana el jugador X!!!";
        banderita=true;
	}
	else if (tablero[0][2]=="O" && tablero[1][2]=="O" && tablero[2][2]=="O"){
		ganador="¡¡¡Gana el jugador O!!!";
        banderita=true;
	}
	
	//DIAGONAL INVERTIDA
	else if (tablero[0][0]=="X" && tablero[1][1]=="X" && tablero[2][2]=="X"){
		ganador="¡¡¡Gana el jugador X!!!";
        banderita=true;
	}
	else if (tablero[0][0]=="O" && tablero[1][1]=="O" && tablero[2][2]=="O"){
		ganador="¡¡¡Gana el jugador O!!!";
        banderita=true;
	}
	
	//DIAGONAL NORMAL
	else if (tablero[0][2]=="X" && tablero[1][1]=="X" && tablero[2][0]=="X"){
		ganador="¡¡¡Gana el jugador X!!!";
        banderita=true;
	}
	else if (tablero[0][2]=="O" && tablero[1][1]=="O" && tablero[2][0]=="O"){
		ganador="¡¡¡Gana el jugador O!!!";
        banderita=true;
	}
	else{
		cout<<"Aun no hay ganador...";
		banderita=false;
	}
	cout<<endl;
	cout<<ganador;
	return  banderita;
}


//FUNCION PRINCIPAL
void pedir_jugada(){
	int bandera;
	bandera=0;//esta bandera sirve para contar el numero de jugadas que se llevan
	bool bandera_ganador;
	bandera_ganador=false;//y esta para saber si hay o no un ganador aun
	while (bandera<9 && bandera_ganador==false){//inicio un while donde pongo dos condicionantes para que se repita
		int contadorX, contadorO, filaX, filaO, columnaX, columnaO;//determino que tipo de funciones tengo
		string jugador1, jugador2;//tipo de funciones
		contadorX=0;//este contador sirve para que en caso de que X se equivoque en las cordenadas pueda volver a ingresarlas 
		contadorO=0;//este contador sirve para que en caso de que O se equivoque en las cordenadas pueda volver a ingresarlas 
		while (contadorX!=1){//aplico el contador anterior con este while
			cout<<endl;
			filaX=validar("Jugador X, dame tu jugada, empezando por la fila:(1-3)");//pido las cordenadas
			cout<<endl;
			columnaX=validar("Ahora dame en la columna: ");//pido las cordenadas
			filaX=filaX-1;//estas cordenadas las resto 1, debido a que se ingresan del 1-3, y en mi matriz el contador esta de 0-2
			columnaX=columnaX-1;
			jugador1="X";//doy el valor de jugador X
			if (filaX>=0 && filaX<=2 && columnaX>=0 && columnaX<=2){//este if sirve para verificar que las cordenadas esten dentro del limite que se esta dando
				if (tablero[filaX][columnaX]=="-"){//para saber si hay una linea dentro de las cordenadas dadas anteriormente
					tablero[filaX][columnaX]=jugador1;//si hay una linea añado en las cordenas el valor de jugador X
                    mostrar_tablero();//muestro el tablero
                    contadorX=1;//aumento mi contador para que se rompa el segundo while
				}
				else{
					cout<<endl;
					cout<<"Esta casilla esta ocupada, vuelve a ingrasar las cordenadas";//si no se cumple el if anterior manda este mensaje de error
					contadorX=2;//contador para que se repita el while de X
				}
			}
			else{
				cout<<endl;
				cout<<"Operaciones invalidas, por favor ingresa valores del 1-3";
				contadorX=2;
			}	
		}
		bandera=bandera+1;//si se cumplio exitosamente el while anteriro, ya se hizo una jugada, asi que el contador de las jugadas aumenta en 1
		bandera_ganador=mostrar_ganador();//verifico si hay o no ganador
		cout<<endl;
		cout<<"Numero de pocisiones ocupadas: "<<bandera;//muestro las pocisiones ocupadas hasta el momento
		if (bandera_ganador==true){//si ya hay un gandor rompo el programa con el break
			break;
		}
		else{//de lo contrario continua el ciclo
			if(bandera==9){//ahora, si el contador de las jugadas llega a 9 digo que no hay ganador y rompo el programa
				cout<<endl;
				cout<<"Juego terminado, no hay ganador";
				break;
			}
			//si no se cumple el if anterior pasa a las siguientes lineas de codigo donde se realiza exatamente lo mismo que lo que se hizo con el jugador X, pero cambiando algunos valores por O
			contadorO=2;
			while (contadorO!=1){
				cout<<endl;
				filaO=validar("Jugador O, dame tu jugada, empezando por la fila: ");
				cout<<endl;
				columnaO=validar("Ahora dame en la columna: ");
				jugador2="O";
				filaO=filaO-1;
				columnaO=columnaO-1;
				if (filaO>=0 && filaO<=2 && columnaO>=0 && columnaO<=2){
					if(tablero[filaO][columnaO]=="-"){
						tablero[filaO][columnaO]=jugador2;
                        mostrar_tablero();
                        contadorO=1;
					}
					else{
						cout<<endl;
						cout<<"La casilla que solicitas esta ocupada, vuelve a ingresar las cordenadas";
						contadorO=2;
					}
				}
				else{
					cout<<endl;
					cout<<"Numeros invalidos, porfavor, vuelva a ingresar las cordenadas";
				}
			}
			bandera=bandera+1;//como se hizo una jugada aumenta el contador de las jugadas
    		bandera_ganador=mostrar_ganador();//verifico si hay o no ganador
            cout<< "\n Numero de pocisiones ocupadas: "<< bandera;//muestro las pocisiones ocupadas
            continue;// es para que se vuelva a "repetir" el ciclo principla
		}
		break;//rompo mi programa
	}
}






//CODIGO PRINCIPAL
int main(int argc, char** argv) {
	//funcion principal
	pedir_jugada();

	
return 0;
}
