#include <iostream>
using namespace std;

int main() {
    int arrMultiDimensi[2][3][4] = {
        {
            {11, 12, 13, 14},
            {15, 16, 17, 18},
            {19, 20, 21, 22}
        },
        {
            {23, 24, 25, 26},
            {27, 28, 29, 30},
            {31, 32, 33, 34}
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << arrMultiDimensi[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}