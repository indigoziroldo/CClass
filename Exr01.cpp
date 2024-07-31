#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int t = 6;
    vector<int> A(t); 
    vector<int> B(t);

    cout << "Digite os n para vA: " << " /n";
    for (int i = 0; i < t; i++) {
        cout << "nº " << i+1 << ": "; // aqui adiciona 1 pra ficar com a contagem certa pro usuário
        cin >> A[i];
    }

    for (int i = 0; i < t; i++) {
        B[i] = (A[i]) / 4;
    }

    cout << "VB = A/4: " << " /n";
    for (int i = 0; i < t; i++) {
        cout << B[i] << " ";
    }
    cout << " /n";

    return 0;
}