#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;

	for (int  i = 1; i <= n; i++)
	{
		float an = 1.0 / i;
		cout << an << endl;
	}

	return 0;
}