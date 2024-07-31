#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int t = 20;
    vector<float> vetor(t);
    float soma = 0;
    float media = 0;
    float maior = numeric_limits<float>::min();
    float menor = numeric_limits<float>::max();
    int posicao_maior = 0;
    int posicao_menor = 0;

    for (int i = 0; i < t; i++) {
        cout << "Digite o nº" << i + 1 << ": ";
        cin >> vetor[i];
        soma += vetor[i];

        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i;
        }
    }

    media = soma / t;
    cout << "Maior: " << posicao_maior << " /n";
    cout << "Menor " << posicao_menor << " /n";
    cout << "Soma: " << soma << " /n";
    cout << "Média: " << media << " /n";

    return 0;
}
