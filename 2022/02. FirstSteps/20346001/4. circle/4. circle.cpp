// 4. circle
#include <iostream>
using namespace std;
int main()
{
	//vars
	float r, p, s;
	float PI = acos(-1.0); //3.14

	//radius
	cout << "r=";
	cin >> r;

	//��������� �� �����������
	p = 2 * PI * r;
	s = PI * pow(r, 2);

	cout << "p=" << p << endl;
	cout << "s=" << s << endl;

	return 0;
}