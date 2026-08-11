/*规则是：先按月份从早到晚排好，同一个月的则按消费金额从高到低排，大额支出优先看。
第一行输入一个整数 n（1 ≤ n ≤ 100），表示订单总数。
接下来 n 行，每行输入两个整数 month 和 money（1 ≤ month ≤ 12，0 ≤ money ≤ 10⁵），分别表示下单月份和消费金额。
输出 n 行，按排序规则依次输出每条订单的月份和消费金额，用空格隔开。*/

#include <bits/stdc++.h>
using namespace std;

struct T {
    int moth;
    int money;
};

struct X {
    bool operator () (const T & a, const T & b) const {
        if (a.moth == b.moth)
            return a.money > b.money;
        else
            return a.moth < b.moth;
    }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector <T> ore(n);
    for (int i=0; i<n; i++) 
        cin >> ore[i].moth >> ore[i].money;

    sort (ore.begin(), ore.end(), X());
    for (int i=0; i<n; i++) 
        cout << ore[i].moth << ' ' << ore[i].money << endl;

    return 0;
}