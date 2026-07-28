/*题目背景：
三角·初华(Misumi Uika)在后台向你挥手打招呼。由于她不太擅长直接表达自己的真实想法，挥手的动作频率被记录成了一串字符。
任务:
我们定义一次完整的打招呼动作为子串 (^ _ ^)/。现在给你一段长字符串，请统计初华一共打了几次招呼✋️。*/

#include <iostream>
#include <cstring>
using namespace std;

int main () {
    const int length = 1e6;
    char x[length+1];
    char copy[] = "(^ _ ^)/";
    cin.getline (x, sizeof(x));
    int count = 0;
    for (int i=0; x[i]; i++) {
        int j=0;
        for (; copy[j] && x[i+j] == copy[j]; j++);
        if (j == 8)
            count ++;
    }
    
    cout << count << endl;
    return 0;
}