#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese el número de elementos: ";
    cin >> n;
    int numeros[n];
    for (int i= 0; i < n; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    cout << "\nParejas:\n";

    // Mostrar parejas
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                cout << "(" << numeros[i] << ", " << numeros[j] << ")" << endl;
            }
        }
    }

    return 0;
}

