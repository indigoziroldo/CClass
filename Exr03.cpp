#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int t = 10;
    vector<int> L(t);
    int pares = 0;
    int div3 = 0;
    int soma = 0;

    cout << "Digite os nºs do vL:" << " /n";
    for (int i = 0; i < t; i++) {
        cout << "nº " << i+1 << ": ";
        cin >> L[i];

        if (L[i] % 2 == 0) {
            cout << L[i] << " é par /n";
            pares++;
        }

        if (L[i] % 3 == 0) {
            cout << L[i] << " é div por 3 /n";
            div3++;
            soma += L[i];
        }
    }

    int media = 0;
    if (div3 > 0) {
        media = (soma) / div3;
    }

    cout << "Qntd de pares: " << pares << " /n";
    cout << "Qntd de div por 3: " << div3 << " /n";
    cout << "Média de div por 3: " << media << " /n";

    return 0;
}