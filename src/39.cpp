/*给定一个整数 n，请你构造一个恰好含有 n 个特殊字符的字符串，或报告无解。

称一个字符是特殊的，当且仅当与它相邻的字符中恰好有一个与它相同。

输入描述

输入格式
第一行一个整数 t，代表测试组数。

接下来 t 行，每行一个整数 n，意义如题意。

输出格式
若有解，输出 YES，并在下一行输构造的最短字符串；若无解，输出 NO。*/
#include <iostream>
using namespace std;

int main () {
    int t, n;
    cin >> t;
    for (; t>0; t--) {
        cin >> n;
        if (n%2 != 0) 
            cout << "NO" << '\n';
        else {           
            cout << "YES" << '\n';
            int i = n/2;
            for (int j=1; j<=i; j++) {
                if (j%2 != 0) 
                    cout << "AA";
                else 
                    cout << "BB";
            }
        } 
        if (n%2 == 0)
            cout << '\n';
    }
    
    return 0;
}
