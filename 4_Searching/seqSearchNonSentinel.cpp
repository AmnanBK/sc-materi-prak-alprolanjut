#include <iostream>
using namespace std;

int main() {
    int x[10] = {20, 50, 10, 30, 60, 70, 80, 40, 100};
    bool found = false;
    int i = 0, nilaiCari;
    cout << "Nilai yang dicari = ";
    cin >> nilaiCari;
    i = 0;
    while ((i < 10) && (!found)) {
        if (x[i] == nilaiCari) {
            found = true;
        }
        else {
            i++;
        }
    }
    if (found) {
        cout << nilaiCari << " ditemukan pada index array ke-" << i << endl;
    } else {
        cout << nilaiCari << " tidak ada dalamm array tersebut" << endl;
    }
}