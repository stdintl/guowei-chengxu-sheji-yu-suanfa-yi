/*仅一行，包含两个整数 a、b（0 <= a,b <= 1e18），中间以空格隔开，代表参与运算的两个数字。

输出描述

一行两个数，第一个a^b的十进制数值，第二个a&b的十进制数值，两数中间用空格隔开。*/
#include <iostream> 
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    //注意运算优先级,必须加括号
    cout << (a^b) << ' ' << (a&b) << endl; 

    return 0;
}