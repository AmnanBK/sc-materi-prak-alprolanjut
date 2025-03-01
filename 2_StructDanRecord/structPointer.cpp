#include <iostream>
using namespace std;

struct Koordinat {
    int x, y;
};

void tukarxy(Koordinat *pos_xy);

int main() {
    Koordinat posisi = {21, 34};
    cout << "x, y semula = " << posisi.x << ", " << posisi.y << endl;
    tukarxy(&posisi);
    cout << "x, y sekarang = " << posisi.x << ", " << posisi.y << endl;
}

void tukarxy(Koordinat *pos_xy) {
    int temp;
    temp = (*pos_xy).x; 
    (*pos_xy).x = (*pos_xy).y;
    (*pos_xy).y = temp; 
}