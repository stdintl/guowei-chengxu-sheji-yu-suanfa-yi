/*给你一个整数 x，你能不能用若干个 11,111,1111,11111,… 相加凑出 x 呢？（每个数字可以用任意多次）
第一行输入一个整数 t(1≤t≤10000) — 测试用例的数量。
接下来每个测试用例只有一行，包含一个整数 x(1≤x≤1e9) — 你需要凑出的数字。
对于每个测试用例，输出一行。如果能凑出 x，就输出 “YES”（不带引号），否则输出 “NO”。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, x;
    cin >> t;
    for (; t>0; t--) {
        cin >> x;
        int check = 0;

        while (x >= 111) {
            if (x % 11 == 0) { 
                check = 1;
                break;
            }
            else 
                x -= 111;
        } 
        if (x%11 == 0)
            check = 1;
        if (check)
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }

    return 0;
}


