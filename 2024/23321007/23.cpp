#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    long long int result = 0;

    cout << "Up to which numbers we want to print numbers, sir?" << endl;
    cin >> n;

    for (unsigned int i = 1; i <= n; i++)
    {
        result += pow(-1, n) * pow(i, n);
    }
    
    cout << "the sum is " << result << endl;

    return 0;
}