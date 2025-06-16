#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	srand(time(0))
	int NumeroAleatorio,CantidadDeNumeros,Rango;
	cout<<"Ingrese la Cantidad de numeros deseados: ";
	cin>>CantidadDeNumeros
	cout<<"Ingrese el valor maximo deseado: ";
	cin>>Rango;
	for (int i=1;i<=CantidadDeNumeros;i++){
		NumeroAleatorio = (rand() % Rango) + 1;
		cout<<NumeroAleatorio;
	}
	return 0;
	
	
}
