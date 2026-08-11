/*初始华丽度倍率：(X = 1)（对应评价 C）
你可以执行连招来提升倍率，每一次连招的规则如下：
选择一个连招强度 K（K>=2），整数）
支付连招的 “消耗”：K 点魔力值
你的华丽度倍率更新为：(X = K*X)

当倍率达到目标倍率 N 时，你就能拿到 SSS 评价！
你的目标是：用最少的魔力消耗，让倍率从 1 提升到 N，打出最省力的 SSS 评价。

输入描述

输入一个正整数 N，代表目标华丽度倍率。
数据范围：1≤N≤10^12

输出描述

输出一个整数，代表达到目标倍率所需的最小魔力消耗。*/
#include <bits/stdc++.h>
using namespace std;
vector <int> num(1000000, 1);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    long long count = 0;
    cin >> n;

    for (int i=2; n!=1 && i<=n;) {
        if (n%i == 0) {
            count += i;
            n /= i;
            continue;
        }
        i++;
    } 
    cout << count << endl;

    return 0;

}

