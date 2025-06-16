#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float radio,Areadelcirculo;
	cout<<"Indique el radio del circulo: ";
	cin>>radio;
	Areadelcirculo = pow(radio, 2) * M_PI;
	cout<<"El area del circulo es: "<<Areadelcirculo<<endl;
	return 0;
}
