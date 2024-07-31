#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int num_candidatos = 7; // candidatos
    vector<string> nomes_candidatos(num_candidatos); // Vetor pros nomes
    vector<int> votos(num_candidatos + 2, 0); // Vetor pros votos
    int voto; // p/ pegar o voto

    // Leia nome
    cout << "Nome dos cand: /n";
    for (int i = 0; i < num_candidatos; ++i) {
        cout << "Candidato " << i + 1 << ": ";
        cin >> nomes_candidatos[i];
    }

    // Leia votos
    cout << "Votos(digite 0 pra sair):" << " /n";
    while (true) {
        cout << "Voto: ";
        cin >> voto;

        // se botar 0 acaba
        if (voto == 0) 
            break;

        // validação
        if (voto >= 1 && voto <= num_candidatos) {
            votos[voto - 1]++; // aumenta o cont pro cand
        } else if (voto == 8) {
            votos[num_candidatos]++; // aumenta o cont p/ votos nulos
        } else if (voto == 9) {
            votos[num_candidatos + 1]++; // aumenta o cont p/ votos em branco
        } else {
            cout << "Inválido/n";
        }
    }

    // Calculo dos votos
    int max_votos = 0;
    int indice_vencedor = 0;
    for (int i = 0; i < num_candidatos; ++i) {
        if (votos[i] > max_votos) {
            max_votos = votos[i];
            indice_vencedor = i;
        }
    }

    // Result
    cout << "Result:" << " /n";
    for (int i = 0; i < num_candidatos; ++i) {
        cout << "O " << nomes_candidatos[i] << " teve " << votos[i] << " votos /n";
    }
    cout << "Nulos: " << votos[num_candidatos] << " /n";
    cout << "Em branco: " << votos[num_candidatos + 1] << " /n";
    cout << "Eleito " << nomes_candidatos[indice_vencedor] << " por " << max_votos << " votos /n";

    return 0;
}
