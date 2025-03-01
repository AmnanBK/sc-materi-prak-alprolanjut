#include <iostream>
using namespace std;

struct DataTgl {
    int tanggal, bulan, tahun;
};

void cetakInfoTgl(DataTgl unitTgl);

int main() {
    DataTgl saatIni;
    cout << "Masukaan tanggal: ";
    cin >> saatIni.tanggal;
    cout << "Masukaan bulan (angka): ";
    cin >> saatIni.bulan;
    cout << "Masukaan tahun: ";
    cin >> saatIni.tahun;
    cetakInfoTgl(saatIni);
}

void cetakInfoTgl(DataTgl unitTgl) {
    string namaBulan[13] = {"Invalid", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    if (unitTgl.bulan > 12) {
        unitTgl.bulan = 0;
    }
    cout << unitTgl.tanggal << " " << namaBulan[unitTgl.bulan] << " " << unitTgl.tahun << endl;
} 