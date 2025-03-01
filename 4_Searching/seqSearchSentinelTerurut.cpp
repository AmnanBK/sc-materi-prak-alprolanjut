#include <iostream>
using namespace std;

int main() {
    int x[11] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i = 0, nilaiCari;
    bool found = false;
    cout << "Nilai yang dicari = ";
    cin >> nilaiCari;
    x[10] = nilaiCari;
    while ((!found) && x[i] < nilaiCari) {
        i++;
    }
    if (i > 9) {
        cout << "Tidak ada " << nilaiCari << " dalam array" << endl;
    }
    else {
        if (x[i] == nilaiCari) {
            cout << nilaiCari << " ditemukan dalam array pada index ke-" << i << endl;
        } else {
            cout << "Tidak ada " << nilaiCari << " dalam array" << endl;
        }
    }
}

