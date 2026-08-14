/*输入一行两个正整数 x 和 y。
输出一个整数，表示答案。
一行两个正整数 x 和 y，用空格分隔。
1≤x≤10 12 1≤y≤10 18
输出一个整数，表示答案。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long x, y, sum=0;
    cin >> x >> y;
    for (long long i=1; i<=x && i<=y;) {
        long long t = x/i;
        long long j = x/t;
        long long k = min(j, y);
        sum += t * (k-i+1);
        i = j + 1;
    }


    cout << sum << endl;

    return 0;

}