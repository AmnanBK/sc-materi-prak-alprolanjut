#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    cout << "Hasil dari " << n << " fibonacci adalah: " << fibonacci(n);
}

int fibonacci (int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci (n - 2);
    }
}