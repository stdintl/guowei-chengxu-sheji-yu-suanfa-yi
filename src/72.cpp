/*第一行输入一个整数 n（1 ≤ n ≤ 10⁵），表示记录天数。
接下来 n 行，第 i 行输入两个整数 ai 和 bi（0 ≤ ai , bi ≤ 10⁵），分别表示第 i 天的收入和支出。
第 n + 2 行输入一个整数 m（1 ≤ m ≤ 10⁵），表示查询次数。
接下来 m 行，每行输入两个整数 l 和 r（1 ≤ l ≤ r ≤ n），表示查询区间。

输出描述

对于每次查询，输出一行两个整数，用空格隔开，分别表示区间 [l, r] 内的总收入和总支出。*/

#include <bits/stdc++.h>
using namespace std;

struct A {
    int a;
    int b;
};

int main () {
    int n;
    cin >> n;
    vector <A> money(n);
    for (int i=0; i<n; i++) 
        cin >> money[i].a >> money[i].b;

    int m;
    cin >> m;
    for (int i=0; i<m; i++) {
        int l, r;
        int suma=0, sumb=0;
        cin >> l >> r;
        for (int j=l-1; j<r; j++) { // 题目中的 l、r 是从 1 开始计数，所以需要转成 0-based 下标
            suma += money[j].a;
            sumb += money[j].b;
        }
        cout << suma << ' ' << sumb << endl;
    }

    return 0;
}