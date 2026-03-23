#include <iostream>
using namespace std;
int main(){
	double num1, num2, num3;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	cout<<"Ingrese el tercer numero: ";
	cin>>num3;
	
	double suma=num1+num2+num3;
	double promedio=suma/3;
	cout<<promedio;
	return 0;}
