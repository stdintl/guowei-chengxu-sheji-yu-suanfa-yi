/*输入描述

输入一个字符串，只考虑其中的英文字母（A-Z 和 a-z），忽略大小写，判断是否为回文串。
回文串：正序和倒序读起来相同。

输出描述

如果是字母回文串，输出 Yes，否则输出 No。*/

#include <iostream>
#include <cstring>
using namespace std;

int main () {
    char str [1000000];
    cin.getline(str, sizeof(str));
    int count = 0;
    for (; str[count]; count++);
//非标准函数:strlwr (str);
    for (int i=0; i<=(count-1)/2; i++) {
        if (str[i] != str[count-1-i] && str[i]-str[count-1-i]!='a'-'A' && str[i]-str[count-1-i]!='A'-'a') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}