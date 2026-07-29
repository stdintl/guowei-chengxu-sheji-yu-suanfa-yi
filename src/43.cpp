/*小z认为自己现在位于坐标 (0,0)，他想要到达坐标 (x,y) 的餐盘处。

为了到达那里，小z 采取大步行走。从任意点 (a,b)，一次大步可以移动到：

(a+2,b) 或 (a,b+2)
但在整个旅程中，小z 最多只能走一步小步。一次小步可以移动到：

(a+1,b) 或 (a,b+1)

输入格式
第一行包含一个整数 t（1≤t≤100），表示测试用例的数量。
每个测试用例包含两个整数 x 和 y （1≤x,y≤10），表示餐盘的坐标。
对于每个测试用例，如果 小z 能到达餐盘，请输出 “YES”，否则输出 “NO”。*/

#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (; t>0; t--) {
        int x, y;
        cin >> x >>y;
        if (x%2==1 && y%2==1) 
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }

    return 0;
}