#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void AP(int *array, int medida){
	for(int i=0; i<medida; i++){
		cout<< array[i] << " ";
		cout<<endl;
	}
}

void merge (int *array, int II, int FI, int FD){
	int i, j, k, TI, TD;
	
	TI= FI-II+1;
	TD= FD-FI;
	int AI[TI], AD[TD];
	for (i=0; i<TI; i++){
		AI[i]=array [FI+1+j];
	}
	for (j=0; j<TD; j++){
		AD[j]=array[FI+1+j];
	}
	i=0; j=0; k=II;
	
	while (i<TI && j<TD){
		if (AI[i] <= AD[j]){
			array[k]=AI[i];
			i++;
		}
		else{
			array[k]=AD[j];
			j++;		
		}
		k++;
	}
	while (i<TI){
		array[k]=AI[i];
		i++; k++;
	}
	while (j<TD){
		array[k]=AD[j];
		j++; k++;
	}
}
void mergeSort(int *array, int II, int FD){
	int FI;
	if (II<FD){
		int FI=II + (FD-II)/2;

		mergeSort(array, II, FI);
		mergeSort(array, FI+1, FD);
		merge(array, II, FI, FD);
	}
}

int main(){
	int n;
	cout<< "ingrese el numero de elementos: ";
	cin>>n;
	int arreglo[n];
	cout<< "Ingrese los elementos: "<<endl;
	
	for (int i=0; i<n; i++){
		cin>>arreglo[i];
	}
	cout<<"Arreglo antes de ordenar: ";
	AP(arreglo,n);
	mergeSort(arreglo, 0, n-1);
	cout<<"Arreglo despues de ordenar: ";
	AP(arreglo, n);
}
