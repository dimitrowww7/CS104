//combinations
#include <iostream>
using namespace std;
long long n_choose_k(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return n_choose_k(n - 1, k - 1) + n_choose_k(n - 1, k);
}
int main() {
    long long result_535 = n_choose_k(5, 3);
    long long result_642 = n_choose_k(6, 2);
    long long result_649 = n_choose_k(6, 4);
    cout << "Combinatorics for 5:35: " << result_535 << endl;
    cout << "Combinatorics for 6:42: " << result_642 << endl;
    cout << "Combinatorics for 6:49: " << result_649 << endl;
    return 0;
}