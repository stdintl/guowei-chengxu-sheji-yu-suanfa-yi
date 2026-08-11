/*每份极光精华可以提供 2 份光元素
每份微光粉末可以提供 1 份光元素
每份暗影结晶可以提供 2 份暗元素
每份暮光之尘可以提供 1 份暗元素
现在大魔导师零零欷想要让这瓶魔药的光暗元素总和最多，请问最多是多少？
第一行一个正整数T，表示测试用例的组数。
接下来 T 行，每行四个非负整数a,b,c,d分别表示极光精华、微光粉末、暗影结晶、暮光之尘的份数。（1≤T≤1000，每种材料的份数不超过10000）
对于每组测试用例，输出一行一个整数，表示最多的元素总和是多少。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (; t>0; t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a < c) {
            int t = a;
            a = c;
            c = t;
            int k = b;
            b = d;
            d = k;
        }
        int x = a*2 + b;
        int y = c*2 + d;
        int z = 0;
        if (2*a > y && b == 0) {
            if (y % 2 == 1)
                z = y - 1;
            else
                z = y;
        } else{
            if (x > y)
                z = y;
            else 
                z = x;
        }
        cout << 2*z << endl;
    }

    return 0;
}