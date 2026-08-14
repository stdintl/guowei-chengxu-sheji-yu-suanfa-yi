#include <iostream>
using namespace std;
const int M = 32767;

int F(int k) {
    int a = 1, b = 2, c;
    if (k == 1) c = a;
    else if (k == 2) c = b;
    else {
        for (int i = 3; i <= k; ++i) {   // 改为 i<=k 更直观
            c = (2 * b + a) % M;         // 正确公式
            a = b;
            b = c;
        }
    }
    return c;
}

int main() {
    int n, k;
    cin >> n;
    while (n--) {
        cin >> k;
        cout << F(k) << endl;
    }
    return 0;
}