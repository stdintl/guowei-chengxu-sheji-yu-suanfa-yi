/*现在要选恰好连续 m 颗糖果组成一段，想找出所有长度为 m 的连续糖果段中，美味值总和最小的那一个和。
第一行两个整数 n,m
第二行 n个整数，为糖果美味值
输出一个整数：所有长度为m的连续区间和的最小值*/
#include <iostream>
#include <vector>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> num(n+10);
    vector <long long> sum(n+10);
    vector <long long> sum1(n+10);
    for (int i=1; i<=n; i++) 
        cin >> num[i]; 
    for (int i=1; i<=n; i++) 
        sum[i] = num[i] + sum[i-1];

    long long min = sum[m] - sum[0];
    for (int i=1; i<=n-m+1) {
        sum1[i] = sum[i+m-1] - sum[i-1];
        min = sum1[i] < min ? sum[i] : min;
    }

    cout << min << endl;
    return 0;
}