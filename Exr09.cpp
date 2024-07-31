#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int qntdAlunos = 30;
    vector<string> nomes(qntdAlunos);
    vector<int> notas(qntdAlunos);
    int notaMaior = 0;
    int cont = 0;

    for (int i = 0; i < qntdAlunos; i++) {
        cout << "Nome do " << i + 1 << ": ";
        cin >> nomes[i];
        cout << "Nota do " << i + 1 << ": ";
        cin >> notas[i];

        if (notas[i] > notaMaior) {
            notaMaior = notas[i];
            cont = i;
        }
    }

    cout << "Melhor aluno: " << nomes[cont] << " nota: " << notaMaior << " /n";

    return 0;
}