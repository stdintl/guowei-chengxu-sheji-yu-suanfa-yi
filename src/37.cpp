/*设鸡²数量为 x，牛⁴数量为 y，则：2x+4y=n
乔治的目标：最小化 x+y。

输入描述

第一行：整数 t（1≤t≤1e3），表示维度塌陷事件的次数（别问为什么频繁塌陷，问就是剧情需要）。

接下来 t 行：每行一个偶数 n（2≤n≤2e3），表示所有生物腿的总数。

输出描述

对于每次事件，输出一行一个整数：乔治需要的最小生物数。*/
#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (; t>0; t--) {
        int n;
        cin >> n;
        if (n%4 == 0) {
            cout << n/4 << endl;
        }
        else {
            int num = 1+(n-2)/4;
            cout << num << endl;
        }
    }
    return 0;
}