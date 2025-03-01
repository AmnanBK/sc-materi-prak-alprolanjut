#include <iostream>
using namespace std;

int main() {
    int x[11] = {20, 50, 10, 30, 90, 60, 70, 80, 40, 100};
    int i = 0, nilaiCari;
    cout << "Nilai yang dicari = ";
    cin >> nilaiCari;
    x[10] = nilaiCari;
    while (x[i] != nilaiCari) {
        i++;
    }
    if (i > 9) {
        cout << "Tidak ada " << nilaiCari << " dalam array" << endl;
    }
    else {
        cout << nilaiCari << " ditemukan dalam array pada index ke-" << i << endl;
    }
}
