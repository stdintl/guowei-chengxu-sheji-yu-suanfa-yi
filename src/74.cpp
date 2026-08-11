/*基本的位运算共 6 种，分别为按位与、按位或、按位异或、按位取反、左移和右移。
现要求：输入三个正整数 a,b,k，请你输出 6 行整数，每行整数分别为：
a 按位与 b；
a 按位或 b；
a 按位异或 b；
a 按位取反；
a 左移 k 位；
a 右移 k 位；
输入 3 个正整数 a,b,k
数据保证，1≤a,b≤215，1≤k≤15*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, k;
    cin >> a >> b >> k;
    cout << (a&b) << '\n' << (a|b) << '\n' << (a^b) << '\n' << ~a << '\n' << (a<<k) << '\n' << (a>>k) << '\n';

    return 0;
}