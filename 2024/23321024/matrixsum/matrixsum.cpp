#include <iostream>
using namespace std;
int main() {
    int A[3][3], B[3][3], C[3][3];
    cout << "�������� ���������� �� ������� A (3x3):" << endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cin >> A[x][y];
        }
    }

    cout << "�������� ���������� �� ������� B (3x3):" << endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cin >> B[x][y];
        }
    }


    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            C[x][y] = A[x][y] + B[x][y];
        }
        return 0;
    }
}