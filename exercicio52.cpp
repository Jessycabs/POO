#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double soma = 0.0;


    cout << "Digite o número de termos: ";
    cin >> n;


    for (int i = 1; i <= n; i++) {
        double numerador = i;
        double denominador = 2 * i - 1;
        soma += numerador / denominador;


        cout << numerador << "/" << denominador;
        if (i < n) {
            cout << " + ";
        }
    }

    // Exibir a soma final
    cout << "\nSoma da série para " << n << " termos = " << fixed << setprecision(6) << soma << endl;

    return 0;
}
