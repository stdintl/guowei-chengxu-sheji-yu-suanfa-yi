/*钟被平均划分为了 n 个地块，钟的编号以1为起点，顺时针进行排布。即1号的顺时针方向依次为2,3,…号；1号的逆时针方向依次为 n,n-1,… 号地块
神器会给定一个长度为 m 的行动力序列 a_1,a_2,…,a_m，在每个回合，指针都需要移动 a_i 个地块，但是可以自由选择指针移动的方向
当所有行动完成，如果指针还处于一号位置，就可以回到过去，输出“YES",否则输出“NO"*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector <int> num(m);
    for (int i=0; i<m; i++)
        cin >> num[m];
    sort (num.begin(), num.end());
    int i=0, j=m-1;
    while (i<=j)


}