#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float parcialu, parciald, calificacion;
	char repetirp= 's';
	while (repetirp == 's'){
		cout<<"Bienvenido a la calculadora de promedios de alumnos \n";
		cout<<"Ahora necesito que me des la calificacion del primer parcial: \n";
		cin>>parcialu;
		cout<<"Ahora quiero que me des la calificacion del segundo parcial: \n";
		cin>>parciald;
		calificacion= (parcialu + parciald)/2;
		if (calificacion >= 6){
			cout<<"El alumno afortunadamente esta aprobado y tiene una calificacion de: " <<calificacion, "\n";}
		else { 
			cout<<"Por desgracia el alumno no aprobo, y tiene una calificacion de:" <<calificacion, "\n";
		}
		cout<<"\n Deseas volver a calcular? (s/n): ";
		cin>>repetirp;
		
	}
	return 0;
}
