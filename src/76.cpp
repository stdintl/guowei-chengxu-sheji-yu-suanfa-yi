/*一行仅由大小写英文字母构成的字符串s，s的长度小于等于1e6。

输出描述

输出完成大小写互换后的字符串，即将s的大写字母换为小写，小写字母换为大写。*/

#include <iostream>
using namespace std;

int main () {
    char ch;
    while (cin >> ch) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch + 'A' - 'a';
        else
            ch = ch + 'a' - 'A';
        cout << ch;
    }
    cout << endl;

    return 0;
}