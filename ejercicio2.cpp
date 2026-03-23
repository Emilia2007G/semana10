#include <iostream>
using namespace std;
int main(){
	int n, num;
	int mayor, menor;
	cout<<"Cuantos numeros vas a ingresar? "<<endl;
	cin>>n;
	cout<<"Ingrese numero 1 "<<endl;
	cin>>num;
	mayor=num;
	menor=num;
	for (int i=2;i<=n;i++){
		cout<<"Ingrese numero "<<i<<endl;
		cin>>num;
	}
	if (num>mayor){
		mayor=num;
		
	}
	if (num<menor){
		menor=num;
	}
	cout<<"El numero mayor es: "<<mayor<<endl;
	cout<<"El numero menor es: "<<menor<<endl;
	return 0;
}