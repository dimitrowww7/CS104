#include<iostream>
using namespace std;
int main()
{
    int n, m, count = 0;
    cout<<"n, x:";
    cin >> n >> x;

    int a[100];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        if (a[i]==x) count++;
    }
    cout << x << "repeats" << count << "times" << endl;
    return 0;
    
}