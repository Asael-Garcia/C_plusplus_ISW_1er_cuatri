#include <iostream>
#include <string>//libreria para que acepte variables tipo string
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//ARREGLOS

int recargas[4][100];
string companias[4]={"1.- Telcel", "2.- Movistar", "3.- Unefon", "4.- AT&T"};
string menuPrincipal[3] = {"1.- Recarga", "2.- Reporte de recargas", "3.- Salir"};
int montos[]={10, 20, 50, 100, 100, 150, 200, 500};
int cantidadRecargas[4]= {0,0,0,0};


//LLAMO LOS PROTOTIPOS DE MIS FUNCIONES
void mostrar_menu(string arreglo[]);
int validar(string mensaje);
bool buscar(int monto);
void registrar_recargas();
void mostrar_recargas();
void mostrar_menu_montos();



//CODIGO PRINCIPAL
int main(int argc, char** argv) {
	int eleccion;
	eleccion=1;
	while (eleccion!=3){
		cout<<"Centro de recargas ULTRA"<<endl;
		mostrar_menu(menuPrincipal);
		eleccion=validar("\n Elija una opcion (1 a 3): ");
		switch (eleccion){
			case 1:
				registrar_recarga();
				break;
			case 2:
				mostrar_recargas();
				break;
			case 3:
				cout<<endl<<"Hasta luego"<<endl;
				break;
			default:
				cout<<endl<<"Elija una opcion valida (1 a 3)"<<endl;
				break;
		}	
		cout<<"Presiona cualquier tecla y luego ENTER para continuar";
		string continuar;
		cin>>continuar;
	}
	return 0;
}



//FUNCIONES


//FUNCION DEL MENU
void mostrar_menu(string arreglo[] int tam){//aqui no recibo parametros porque los arreglos ya son globales
	for (int i = 0; i< sizeof(*arreglo) ;i++){//LINEA CORRECTA
		cout<< menuPrincipal[i]<<endl; 
	}
}



//FUNCION DE MENU PARA LOS MONTOS
void mostra_menu_montos(){
	for (int i =0; i<7; i++){
		cout<<montos[i]<<endl
	}
}


//FUNCION DE VALIDACION
int validar(string mensaje){//aqui si recibe parametros ya que me validara la opcion que daré, ademas digo que tipo será
	bool bandera=true;//ajusto mi variable booleana, digo que es verdadera
	string dato;
	int valor;
	while (bandera==true)
	{
		cin>>dato;
		valor= atoi(dato.c_str());
		if (valor != 0)
		{
			bandera=false
		}
		else 
		{
			cout<<"Solamente se admiten numeros";
			bandera=true;	
		}
	}
	return valor;
}


//FUNCION QUE NOS PERMITE BUSCAR EL MONTO INDICADO EN EL ARREGLO DE LOS MONTOS

bool buscar(int monto){
	bool existe=false;
	for (int i=0; i<7; i++){
		if (monto == montos[i]){
			existe=true;
		}
	}
	return existe;
}


//FUNCION DE REGISTRAR RECARGAS

void registrar_recargas(){
	cout<<endl<<"Companias"<<endl;
	mostrar_menu(companias);
	int compania;
	compania=validar("\n Elija una compañia (1 a 4): ");
	if (compania >0 && compania <5){
		cout<<"Montos";
		mostrar_menu_montos;//ocupo crear una funcion nueva
		int monto;
		monto=validar("\n Indique el monto que recargo: ");
		if (buscar(monto)){
			recargas[compani-1][cantidadRecargas[compania-1]]=monto;
			cantidadRecargas[compania-1]++;
			cout<<"Recarga registrada"<<endl;
		}
		else {
			cout<<"Monto no valido"<<endl;
		}
	}
	else{
		cout<<"Opecion no valida"<<endl;
	}
}


//FUNCION PARA MOSTRAR LAS RECARGAS
void mostrar_recargas(){
	cout<<"Recargas realizadas"<<endl;
	for (int i=0; i<4; i++){
		cout<<endl<<companias[i]<<endl;
		int total;
		total=0;
		for (int j=0; j<cantidadRecargas[i]; j++){
			cout<<recargas[i][j];
			total=total+recargas[i][j];
		}
		cout<<"Total: "<<total<<endl;
	}
}
