#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a,b,c,Discriminante,X1,X2;
	cout<<"Indique el coeficiente a de la ecuacion cuadratica: ";
	cin>>a;
	cout<<"Indique el coeficiente b de la ecuacion cuadratica: ";
	cin>>b;
	cout<<"Indique el coeficiente c de la ecuacion cuadratica: ";
	cin>>c;
	Discriminante = sqrt(pow(b,2) - 4*(a*c));
	if (Discriminante > 0){
		X1 = (-1*b + sqrt(pow(b,2) - 4*(a*c)))/ 2*a;
		X2 = (-1*b - sqrt(pow(b,2) - 4*(a*c)))/ 2*a;
		cout<<"Las raices son: "<<X1<<" "<<X2<<endl;
	} else if (Discriminante == 0){
		X1 = (-1*b + sqrt(pow(b,2) - 4*(a*c)))/ 2*a;
		cout<<"Las raices son iguales: "<<X1<<endl;
	} else {
		cout<<"No existen raices reales";
	}
	return 0;
}
