/*输入描述

仅一行，包含两个整数 a、b（1 <= a <= 10, 0 <= b <= 10），中间以空格隔开，代表参与运算的两个数字。

输出描述

输出一个整数， a 的 b 次方运算结果。*/
#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    long long k=1;
    for (; b>0; b--) 
        k *= a;

    cout << k << endl;

    return 0; 
}