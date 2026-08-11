/*给定一个数组a n
 ，你最多可以对该数组执行以下操作一次：
选择一个正整数 k，以及一个数组 a 的子序列b m
 ，将 k 加到该子序列的每一个元素上，即对于每个 i 执行 a b i:=a b i +k。
你需要判断能否通过最多一次这样的操作，使得数组变为非递减（即升序）排列。
如果序列 b 可以通过从 a 的任意位置删除若干（可能为零或全部）元素得到，那么 b 是 a 的一个子序列。
每组测试包含多组测试数据。第一行包含一个整数 t（1≤t≤10 4 ），表示测试组数。
每组测试的第一行包含一个整数 n（1≤n≤2⋅10 5 ），表示数组 a 的长度。
每组测试的第二行包含 n 个整数 a （1≤a i≤10 9 ）。
保证所有测试组中 n 的总和不超过 2⋅10 5
对于每组测试数据，如果能够通过最多一次上述操作使得数组变为非递减排列，输出 “YES”。否则输出"NO"*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (; t>0; t--) {
        int n;
        cin >> n;
        vector <int> num(n+10);
        int max = INT_MIN;
        for (int i=1; i<=n; i++) {
            cin >> num[i];
            int k = num[i-1] - num[i];
            max = k > max ? k : max;
        }
        
        int i=1;
        for (; i<n; i++) 
            if (num[i-1] > num[i]) {
                num[i] += max;
                if (num[i] > num[i+1]+max) {
                    cout << "NO" << endl;
                    break;
                }
            }

        if (i == n)
            cout << "YES" << endl;
    }
    return 0;
}

//正向求范围失败,可以反向取值验证