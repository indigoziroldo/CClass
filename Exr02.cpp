#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int t = 20;
    vector<int> A(t);
    vector<int> B(t);
    vector<int> C(t);

    cout << "Digite VA: " << " /n";
    for (int i = 0; i < t; i++) {
        cout << "nº " << i+1 << ": ";
        cin >> A[i];
    }

    cout << "Digite VB: " << " /n";
    for (int i = 0; i < t; i++) {
        cout << "nº " << i+1 << ": ";
        cin >> B[i];
    }
    
    for (int i = 0; i < t; i++) {
        C[i] = A[i] + B[i];
    }

    cout << "VC = A+B: " << " /n";
    for (int i = 0; i < t; i++) {
        cout << C[i] << " ";
    }
    cout << " /n";

    return 0;
}