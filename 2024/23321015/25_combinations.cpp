#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> times = { "5:35", "6:42", "6:49" };

    sort(times.begin(), times.end());
    do
    {
        for (const string& time : times) {
            cout << time << " ";
        }
        cout << endl;
    } while (next_permutation(times.begin(), times.end()));

    return 0;
}