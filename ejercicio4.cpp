#include <iostream>
using namespace std;

int main() {
    int n;
    int contador = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n > 1) {
        int resultado = n / 2;

        cout << n << " / 2 = " << resultado << endl;

        n = resultado;   
        contador++;      
    }

    cout << "\nSe dividio " << contador << " veces" << endl;

    return 0;
}