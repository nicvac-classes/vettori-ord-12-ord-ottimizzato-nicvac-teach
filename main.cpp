#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    srand(time(0));
    
    int n, i, j;

    cout << "Quanti numeri casuali generare?" << endl;
    cin >> n;
    vector<int> v(n);

    // Carico il vettore con valori casuali
    i = 0;
    while (i < n) {
        v[i] = rand() % n * 10;
        i = i + 1;
    }

    // Visualizzo il vettore
    cout << "Valori casuali generati:" << endl;
    i = 0;
    while (i < n) {
        cout << "V[" << i << "]=" << v[i] << endl;
        i = i + 1;
    }

    // Ordinamento del vettore
    int t;
    bool scambio;

    scambio = true;
    i = 0;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (v[j] > v[j + 1]) {
                scambio = true;
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }

    // Visualizzo il vettore ordinato
    cout << "Valori ordinati:" << endl;
    i = 0;
    while (i < n) {
        cout << "V[" << i << "]=" << v[i] << endl;
        i = i + 1;
    }
    return 0;
}
