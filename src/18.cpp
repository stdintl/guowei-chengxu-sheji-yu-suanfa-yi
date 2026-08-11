/*碑林之中，立有 n 块石碑，依次编号 1, 2, …, n。
每块碑上刻着一个数字 a[i]，谓之“真元值”。正值代表念头通达，负值代表道心蒙尘。
牛神会站在碑林之外，依次问出 m 个问题。
每个问题给出两个数字 l 和 r。
必须回答：第 l 块碑到第 r 块碑的真元之和是多少。
第一行两个整数 n（1≤n≤10 5 ）, m（1≤m≤10 5 ），分别表示石碑的数量和长老的询问次数。
第二行 n 个整数 a[1], a[2], …, a[n]，a[n]（−10 4≤a[n]≤10 4 ）表示每块碑上的真元值。
接下来 m 行，每行两个整数 l, r（1≤l≤r≤n），表示一次询问的区间。

共 m 行，每行一个整数，依次输出每次询问的区间和。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, l, r;
    cin >> n >> m;
    vector <int> a(n+10);
    vector <int> sum(n+10);
    for (int i=1; i<=n; i++) { 
        cin >> a[i];
        sum[i] += a[i] + a[i-1];
    }

    for (int i=0; i<m; i++) {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l-1] << endl;
    }

    return 0;
}
