#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float C1,C2,H;
	cout<<"Ingrese el valor del cateto 1: ";
	cin>>C1;
	cout<<"Ingrese el valor del cateto 2: ";
	cin>>C2;
	H = sqrt(pow(C1,2) + pow(C2,2));
	cout<<"La hipotenusa es: "<<H<<endl;
	return 0;
	
}
