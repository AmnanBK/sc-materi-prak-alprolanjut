#include <iostream>
using namespace std;

int main() {
    int x[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i = 0, nilaiCari;
    bool found = false;
    cout << "Nilai yang dicari = ";
    cin >> nilaiCari;
    while ((i < 10) && (!found) && (nilaiCari >= x[i])) {
        if(x[i] == nilaiCari) found = true;
        else i++;
    }
    if (found) {
        cout << nilaiCari << " ditemukan pada index array ke-" << i << endl;
    } else {
        cout << nilaiCari << " tidak ada dalamm array tersebut" << endl;
    }
}