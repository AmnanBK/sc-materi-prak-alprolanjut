#include <iostream>
using namespace std;

struct Pasien {
    string noPendaftaran, nama;
    float biaya;
};

int main() {
    Pasien pasien1;
    
    cout << "No Pendaftaran: ";
    cin >> pasien1.noPendaftaran;
    cout << "Nama: ";
    getline(cin >> ws, pasien1.nama);
    cout << "Biaya: ";
    cin >> pasien1.biaya;

    cout << "No Pendaftaraan: " << pasien1.noPendaftaran << endl;
    cout << "Nama: " << pasien1.nama << endl;
    cout << "Biaya: " << pasien1.biaya << endl;
}