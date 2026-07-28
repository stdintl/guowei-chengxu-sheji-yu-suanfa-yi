/*佩奇有一排糖果，每颗糖果都有一个美味值。
现在要选恰好连续 m 颗糖果组成一段，想找出所有长度为 m 的连续糖果段中，美味值总和最小的那一个和。

输入描述

第一行两个整数 n,m
第二行 n个整数，为糖果美味值

输出描述

输出一个整数：所有长度为m的连续区间和的最小值*/
#include <iostream>
#include <vector>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int>num(n);
    vector<int> sum(n-m+1);
    for (int i=0; i<n; i++) {
        cin >> num[i]; 
    }
    for (int i=0; i<m; i++) {
        sum[0] += num[i];
    }
    int min = sum[0];
    for (int i=0; i<n-m; i++) {
        for (int j=i; j<i+m; j++) {
            sum[i] += num[j];
        }
        if (sum[i]<min)
            min = sum[i];
        
    }
    cout << min << endl;
    return 0;
}