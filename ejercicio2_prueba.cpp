# include <iostream>
using namespace std;
/*
int main(){ 
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    while(n!=0){
        for (int i=0; i<=n; i++){ va de 0 a n sube al numero que el usuario escribio)
            int num[0];  no sirve de nada (mejor daña el codigo no debí ponerle)
            cout<<num++<<"-"<<n<<endl; hace la suma pero en vez de dar el cuadrado solo da n que es el numero que ingreso el ususario

        }
    }
}
*/
int main(){
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        cout<<i<<"->"<<i*i<<endl;
    }
}
