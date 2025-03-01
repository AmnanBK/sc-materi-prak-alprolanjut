#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {
    int jumlahMhs = 5;
    Mahasiswa listMhs[jumlahMhs];

    for (int i = 0; i < jumlahMhs; i++) {
        cout << "Masukkan Data Mahasiswa ke-" << i +1 << endl;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, listMhs[i].nama);
        cout << "NIM: ";
        cin >> listMhs[i].nim;
        cout << "IPK: ";
        cin >> listMhs[i].ipk;
    }

    for (int i = 0; i < jumlahMhs; i++) {
        cout << "Data Mahasiswa ke-" << i +1 << endl;
        cout << "Nama: " << listMhs[i].nama << endl;
        cout << "NIM: " << listMhs[i].nim << endl;
        cout << "IPK: " << listMhs[i].ipk << endl;
    }
}