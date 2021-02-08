#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float urea, bun;
	int continuar;
	continuar= 1 ;
	cout<< "Bienvenido a la calculadora de BUN de la sangre\n";
	while (continuar==1){
		cout<<"Necesito que me des la urea de la sangre: ";
		cin>>urea;
		bun=urea/2.1667;
		cout<<"El BUN en tu sangre es de: " <<bun,"\n";
		if (bun<=18.4){
			cout<<"\nSegun tu nivel de BUN que obtuvimos te encuentras en un nivel NORMAL, asi que no te preucupes tanto";}
		else {
			cout<<"\nSegun tu nivel de BUN que obtuvimos te encuentras en un nivel ALTO, asi que debes empezar a preucuparte y cuidarte mas";}
		cout<<"\n¿Deseas realizar alguna otra operacion? si es asi preciona 1, de lo contrario preciona cualquier otra tecla\n";
		cin>>continuar;}
	return 0;
}
