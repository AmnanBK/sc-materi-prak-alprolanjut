#include <iostream>
using namespace std;

int main() {
    int x[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int awal = 0, akhir = 9, tengah, nilaiCari;
    bool found = false;
    cout << "Nilai yang dicari: ";
    cin >> nilaiCari;
    while((!found) && (awal <= akhir)) {
        tengah = (awal + akhir) / 2;
        if (nilaiCari == x[tengah]) {
            found = true;
        }
        else {
            if (nilaiCari < x[tengah]) {
                akhir = tengah - 1;
            } else {
                awal = tengah + 1;
            }
        }
    }
    if (found) {
        cout << nilaiCari << " ditemukan dalam array pada index ke-" << tengah << endl;
    } else {
        cout << "Tidak ada " << nilaiCari << " dalam array" << endl;
    }
}