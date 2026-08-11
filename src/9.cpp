/*在数字星球「比特星」上，所有的计算、交流、记录都只用0 和 1完成。
在只有二进制的世界里，打出一张专属的二进制乘法表，证明自己已经掌握了基础的数字规则。
输入一个正整数 n
请你输出一个 n 行的二进制乘法表。
每个结果间以空格隔开
1*1=1
1*2=10  2*2=100
1*3=11  2*3=110  3*3=1001*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << j << '*' << i << '=';
            
            vector <int> num(100);
            int k = j*i;
            int count = 0;
            do {
                num[++count] = k&1;
                k = k >> 1;
            } while (k != 0);

            while (count > 0) 
                cout << num[count--];
            cout << (i==j ? "\n":"  ");
        }
    }
    return 0;
}