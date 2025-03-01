#include <iostream>
using namespace std;

int faktorial(int n);

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    cout << "Hasil dari " << n << " faktorial adalah: " << faktorial(n);
}

int faktorial (int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}