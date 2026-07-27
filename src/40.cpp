/*输入一行字符，统计出其中数字字符的个数。

输入
一行字符串，总长度不超过255。
输出
输出为1行，输出字符串里面数字字符的个数。*/

#include <iostream>
using namespace std;
int main () {
    int count = 0;
    while (cin){
        char i;
        cin >> i;
        if (i>='0' && i<='9'){
            count ++;
        }
    }
    cout << count << endl;

    return 0;
}