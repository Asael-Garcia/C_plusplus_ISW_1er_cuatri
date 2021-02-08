#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float base, altura, perimetro, area;
	char continuar= 's';
	int opt;
	using namespace std;
	char respuesta=1;
	while(continuar=='s'){
		cout<<"\nBienvenido a tu calculadora de areas o permitros de rectangulos\n";
		cout<<"Dame la medida de la base: \n";
		cin>>base;
		cout<<"Ahora dame la medida de la altura: \n";
		cin>>altura;
		cout<<"¿Que operacion quieres realizar? 1 para area 2 para perimetro del recangulo:\n";
		cin>>respuesta;
		if (respuesta=='1'){
			area=base*altura;
			cout<<"La area que estas buscando es de: " <<area, "\n";}
		else{
			perimetro=base*2+altura*2;
			cout<<"El perimetro de tu figura es de: " <<perimetro, "\n";
			}
		cout<<"\n¿Deseas realizar alguna otra operacion? si es asi preciona s, de lo contrario preciona cualquier otra tecla\n";
		cin>>continuar;}
	return 0;
}


