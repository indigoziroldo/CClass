//
// Created by indigo on 8/13/24.
// Caso cidades
// Considere n cidades numeradas de 0 a n-1,
// que estão interligadas por uma série de estradas de mão única
// Assis, CM, Tarumã, PP
//

#include <iostream>
#include <string>
using namespace std;
int i = 4;
int mapa[4][4] = {
        { 0,1,1,0},
        {0,0,1,0},
        {1,0,0,1},
        {0,0,1,0}
};
string cidades[4] = {"Assis","CM","Tarumã","Pedrinhas Paulistas"};

int k = 0;

void qtdCaminhosChegam(){
    int qtdCaminhos = 0;
    for (int j = 0; j < 4; ++j) {
            if(mapa[j][k] == j){
                qtdCaminhos++;
            }
    }
cout << "Caminhos que chegam : " << qtdCaminhos << endl;
}

void qtdCaminhosPartem(){
    int qtdCaminhos = 0;
    for (int j = 0; j < 4; ++j) {
        if(mapa[j][k] == j){
            qtdCaminhos++;
        }
    }
    cout << "Caminhos que saem : " << qtdCaminhos << endl;
}

void validacao(){
        if(k < 0 || k > 3){
            cout << "Valor inválido!";
        }
}

int main(){
    int op = 0;
    do {
        cout<< "-------------MENU---------------"<< endl;
        cout << "Digite a cidade:" << endl;
        cin >> k;
        validacao();
        cout<< "\n1 - Quantificar caminhos que chegam" << endl;
        cout << "2 - Quantificar caminhos que partem" << endl;
        cout << "   - Digite uma opção: " << endl;
        cout << "\nDigite 0 para sair!!!" << endl;
        cin >> op;

        // menu switch
        switch(op){
            case 1:
                qtdCaminhosChegam();
                break;
            case 2:
                qtdCaminhosPartem();
                break;
            default:
                break;
        }
    } while (op !=0);

    return 0;
}
