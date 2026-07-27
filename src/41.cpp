/*给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

输入
一个字符串，长度小于100000。
输出
输出第一个仅出现一次的字符，若没有则输出no。*/

#include <iostream>
using namespace std;

int main () {
    const int num = 100000;
    char str [num];
    cin >> str;
    int i=0;
    for (; str[i]; i++) {
        int j = 0;
        for (; str[j]; j++) {
            if (str[i]==str[j] && i!=j)
                break;
        }
        if (str[j]==0) {
            cout << str[i] << endl;
            return 0;
        }
    } 
    if (str[i] == 0) {
        cout << "no" << endl;
    }

    return 0;
}

//学会调试和改错;