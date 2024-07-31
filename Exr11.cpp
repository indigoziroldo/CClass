#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int num_pessoas = 15;
    vector<string> vNome(num_pessoas);
    vector<float> vSal(num_pessoas);
    string nome_maior_salario, nome_menor_salario;
    float maior_salario = 0, menor_salario = numeric_limits<float>::max();
    int cont_salario_maior_1000 = 0;

    cout << "Digite o nome e sal:" << " /n";
    for (int i = 0; i < num_pessoas; ++i) {
        cin >> vNome[i];
        cin >> vSal[i];

        if (vSal[i] > maior_salario) {
            maior_salario = vSal[i];
            nome_maior_salario = vNome[i];
        }

        if (vSal[i] < menor_salario) {
            menor_salario = vSal[i];
            nome_menor_salario = vNome[i];
        }

        if (vSal[i] > 1000) {
            cont_salario_maior_1000++;
        }
    }

    cout << "Empregado c/ maior sal:" << " /n";
    cout << "Nome: " << nome_maior_salario << " R$" << maior_salario << " /n";
    cout << "Empregado c/ menor sal:" << " /n";
    cout << "Nome: " << nome_menor_salario << " R$" << menor_salario << " /n";
    cout << "Ganham mais que 1000R$: " << cont_salario_maior_1000 << " /n";

    return 0;
}