#include <iostream>
using namespace std;

int main() {
    int count = 0;
    char ch;
    while (cin.get(ch)) {        // 逐个字符读取，不跳过空格
        if (ch == '\n') break;   // 只统计一行，遇到换行就停止
        if (ch >= '0' && ch <= '9') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}