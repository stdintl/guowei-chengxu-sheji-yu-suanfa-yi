/*你可以上一个或两个阶梯，给你一个n,你需要返回登上第n个阶梯的方案数
第一行输入一个t;
接下来t行，每行一个n
数据保证1<=t<=1e6,1<=n<=1e6
输出一个方案数
答案对1e9+7取模*/

#include <bits/stdc++.h>
using namespace std;

const int x = 1000000;
const int y = 1000000007;
long long num[x+10];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    num[1] = 1;
    num[2] = 2;
    for (int i=3; i<=x; i++)
        num[i] = num[i-1]%y + num[i-2]%y;

    int t, n;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n;
        cout << num[n] << endl;
    }
    return 0;
}
