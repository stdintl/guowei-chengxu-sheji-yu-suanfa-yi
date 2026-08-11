/*一开始有一个长度为 n 的数组，数组内所有数字初始都是 0。
每一次操作，nanna 可以任选一段连续子数组，把区间内每一个数字都加上 1。现在给定目标数组 target，请求出从全零数组变换到目标数组，
最少需要多少次操作。
第一行输入一个整数 n，代表数组长度。
第二行输入 n 个整数，依次为数组 target 的各个元素。
输出一行一个整数，表示最小操作次数。
答案保证在 32 位整数范围内。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    int count = 0;
    vector <int> num(n+10);
    for (int i=1; i<=n; i++) { 
        cin >> num[i];
        int diff = num[i] - num[i-1];
        if (diff > 0)
            count += diff;
    }

    cout << count << '\n';

    return 0;

}