#include <iostream>

using namespace std;




//FD=fin del arreglo derecho
//FI= fin del arreglo izquierdo
//II= inicio del arreglo izquierdo
//TI= tamaño del arreglo izquierdo
//TD= tamaño del arreglo derecho
//AI=arreglo del lado izquiedo
//AP= arreglo principal



//FUNCIONES

void AP (int *array, int medida){ //aqui creo el arreglo o vector, lo presento mejor dicho
	for (int i= 0; i<medida; i++)
		cout <<array[i] << " ";
		cout<<endl;
}

void merge(int *array, int II, int FI, int FD){//aqui es donde se hace practicamente todo el trabajo
	int i, j, k, TI, TD;
	
	TI= FI-II+1; TD= FD-FI; //aqui determino el tamaño de los vectores izquierdo y derecho 
   int AI[TI], AD[TD];   //son los arreglos del lado izquiedo y derecho
   
   for (i=0; i<TI; i++){ //este for es para demenuzar el arreglo del lado izquierdo
   
		AI[i]=array[II+i];
	}
   for (j=0;j<TD;j++){ //y este para desmenuzar el del lado derecho 
   
		AD[j]=array[FI+1+j];	
	}	
   i=0; j=0; k=II;
	
	while (i<TI && j<TD){ //aqui se va a comparar los terminos de cada arreglo ya desmenuzado 
		if (AI[i] <= AD[j]){ //y se guarda en el array[k]
			array[k]=AI[i];
			i++;
		}else{
			array[k]=AD[j];
			j++;
		}
	   k++;
	}
	
	while(i<TI){//aqui se esta guardando los arreglos que no se pudieron guardar anteriormente
		array[k]=AI[i]; //es decir los datos sobrantes (ARREGLO DE LA IZQUIEDA)
		i++; k++;
	}
	while(j<TD){ //Guardando arreglo de la derecha
		array[k]=AD[j];
		j++; k++;
	}
}

void mergeSort(int *array, int II, int FD){ //esta funcion nos permite ordenar desde la parte más 
	int FI;									//imple a la que se demenuzo el arreglo
	if(II<FD){
		int FI=II+(FD-II)/2;
		
		mergeSort(array, II, FI);//arreglo de la izquierda 
		mergeSort(array, FI+1, FD);//arreglo de la derecha
		merge(array, II, FI, FD);
	}
}

//aqui ejecuto el codigo
int main(){
	int n;
	cout<< "Ingrese el numero de elementos: ";//pido y doy el numero de elemento que tendra el array
	cin>>n;
	int arreglo[n];
	cout<< "Ingrese los elementos: "<<endl;//ingreso los elementos
	
	for(int i = 0; i<n; i++){
		cin>>arreglo[i];
	}
	cout<<"Arreglo antes de ordenar: "; //presento el arreglo antes de ser ordendo
	AP(arreglo, n);
	mergeSort(arreglo, 0, n-1);//llamo a la funcion para ordenarlo
	cout<< "Arreglo despues de ordenar: ";//presento el arreglo despues de ordenarlo
	AP(arreglo, n);//arreglo ya ordenado
}
