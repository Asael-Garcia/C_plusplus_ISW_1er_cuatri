#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float base, altura, lado,area, perimetro;
	char continuar;
	continuar='s';
	int respuesta;
	
	cout<< "Bievenido a la calculadora de areas y perimetros de figuras\n";
	while (continuar=='s'){
		cout<< "Selecciona alguna de nuestras opciones: \n";
		cout<< "Cuadrado (1)\n";
		cout<< "Rectangulo (2)\n";
		cout << "Triangulo (3)\n";
		cout<< "Circulo (4)\n";
		cin>>respuesta;
		switch (respuesta){
			case 1: 
				cout<<"Necesito que me des la media de cualquier lado: ";
				cin>>lado;
				area = lado* lado;
				perimetro=lado*4;
				cout<<"El area y perimetro de tu figura es de: \n";
				cout<<"\nAREA: "<<area;
				cout<<"\nPERIMETRO: "<<perimetro;
				break;
			case 2:
				cout<< "Ahora necesito que me des la medida de la base:\n ";
				cin>> base;
				cout<<"Ahora dame la medida de la altura: \n";
				cin>> altura;
				area=base*altura;
				perimetro=base*2+altura*2;
				cout<<"El area y perimetro de tu figura es de: \n";
				cout<<"\nPERIMETRO: "<<perimetro;
				cout<<"\nAREA: "<<area;
				break;
			case 3:
				cout<<"Cabe aclarar que este calculo solo funciona con tringulos equilateros\n ";
				cout<< "Ahora dame la medida de la base: \n";
				cin>>base;
				cout<<"Ahora necesito la altura del triangulo: \n";
				cin>>altura;
				area=(base*altura)/2;
				perimetro=base*3;
				cout<<"El area y perimetro de tu figura es de: ";
				cout<<"\nAREA"<<area;
				cout<<"\nPERIMETRO"<<perimetro;
				break;}
		cout<<"\nDeseas calcuar el area y perimetro de otra figura?: (s/n) ";
		cin>>continuar;
	}
	return 0;
}
