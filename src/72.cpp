/*第一行输入一个整数 n（1 ≤ n ≤ 10⁵），表示记录天数。
接下来 n 行，第 i 行输入两个整数 ai 和 bi（0 ≤ ai , bi ≤ 10⁵），分别表示第 i 天的收入和支出。
第 n + 2 行输入一个整数 m（1 ≤ m ≤ 10⁵），表示查询次数。
接下来 m 行，每行输入两个整数 l 和 r（1 ≤ l ≤ r ≤ n），表示查询区间。

输出描述

对于每次查询，输出一行两个整数，用空格隔开，分别表示区间 [l, r] 内的总收入和总支出。*/

#include <bits/stdc++.h>
using namespace std;

struct A {
    long long a;
    long long b;
};

int main () {
    int n;
    cin >> n;
    vector <A> money(n+10);
    vector <A> sum(n+10);
    for (int i=1; i<=n; i++) {
        cin >> money[i].a >> money[i].b;
        sum[i].a = sum[i-1].a + money[i].a;
        sum[i].b = sum[i-1].b + money[i].b;
    }

    int m;
    cin >> m;
    for (int i=0; i<m; i++) {
        int l, r;
        cin >> l >> r;
        cout << sum[r].a - sum[l-1].a<< ' ' << sum[r].b - sum[l-1].b << endl;
    }

    return 0;
}