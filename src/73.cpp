/*要从p0(0,0)到达终点pk。能进行以下几种移动：
(xi,yi)→(xi+2,yi+1);
(xi,yi)→(xi+3,yi);
(xi,yi)→(xi+4,yi−1).
不会有其他类型的移动，例如移动可以是(0,0)→(2,1)和(2,1)→(5,1)，但绝不会是(2,1)→(3,2) 、 (3,0)→(5,−1)或(4,−1)→(6,−1)等。
给你一个平面上的整数终点坐标(x,y)，请判断是否能从p0(0,0)到达pk(x,y)。
第一行包含测试用例的数量 t (1≤t≤103)。测试用例说明如下。
每个测试用例的唯一一行包含两个整数 x 和 y (1≤x≤109, −108≤y≤108)，即终点坐标。
如果可以通过满足条件的移动到达终点，输出"YES"，否则输出"NO"（不带引号）。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (; t>0; t--) {
        int x, y;
        cin >> x >> y;
        int k = x-2*y;

        if (k < 0)
            cout << "NO" << endl;
        else if (k%3 != 0)
            cout << "NO" << endl;
        else {
            k /= 3;
            int c = k/2;
            if (c+y >= 0)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }

    return 0;
}

//数学分析