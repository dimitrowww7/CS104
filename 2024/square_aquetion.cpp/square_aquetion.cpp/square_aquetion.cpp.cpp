
//�������� �� �������� �� ��������� ���������
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c;
        cin >> a >> b >> c;

        float d = pow(b, 2) - 4*a*c;
        float x1 = ((-b) + sqrt(d)) / (2*a);
        float x2 = ((-b) - sqrt(d)) / (2*a);

        cout << "d=" << d << endl;
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;

        return 0;
}
    

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
