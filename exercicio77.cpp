#include <iostream>
using namespace std;

void exibirPadrao(int linhas) {
    // linha
    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= linhas - i; j++) {
            cout << "  ";
        }
        // Exibir os asteriscos
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int linhas = 5;
    exibirPadrao(linhas);
    return 0;
}
