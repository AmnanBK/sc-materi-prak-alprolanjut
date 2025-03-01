#include <iostream>
using namespace std;

int pangkat(int basis, int eksponen);

int main() {
    int basis, eksponen;
    cout << "Masukkan angka basis: ";
    cin >> basis;
    cout << "Masukkan angka eksponen: ";
    cin >> eksponen;
    cout << "Hasil dari " << basis << " pangkat " << eksponen << " adalah: " << pangkat(basis, eksponen);
}

int pangkat (int basis, int eksponen) {
    if (eksponen == 0) {
        return 1;
    } else {
        return basis * pangkat(basis, eksponen - 1);
    }
}