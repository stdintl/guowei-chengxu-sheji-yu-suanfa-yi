/*要么是一排中最左边的牌，要么是最右边的牌。当没有牌时，游戏结束。游戏结束时，牌上数字总和最大的玩家获胜。
Kyousuke与Kirino 都很贪心。他们每个人在移动过程中都会选择数字较大的牌。
第一行包含一个整数 n（1≤n≤1000）——牌的数量。
第二行包含 n 个用空格隔开的整数，分别表示从左到右每张牌上的数字。牌上的数字互不相同，且都是 1 到 1000 之间的整数
在一行输出两个整数，分别表示游戏结束时 Kyousuke与Kirino 的得分。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector <int> num(n);
    for (int i=0; i<n; i++) 
        cin >> num[i];

    int sumy = 0, sumi = 0;
    int left = 0, right = n-1;
    bool check = true;
    int temp;
    while (left <= right) {
        if (num[left] > num[right]) 
            temp = num[left++];
        else 
            temp = num[right--];
        if (check) 
            sumi += temp;
        else 
            sumy += temp;
        check != check;
        }
    cout << sumi << ' ' << sumy << endl;

    return 0;
}
