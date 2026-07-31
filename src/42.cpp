/*输入包括N+1行：
第一行是一个整数N，表示一共进行了N次游戏。1 <= N <= 100。
接下来N行的每一行包括两个字符串，表示游戏参与者Player1，Player2的选择（石头、剪子或者是布）：
S1 S2
字符串之间以空格隔开S1,S2只可能取值在{"Rock", "Scissors", "Paper"}（大小写敏感）中。
输出
输出包括N行，每一行对应一个胜利者（Player1或者Player2），或者游戏出现平局，则输出Tie。
样例输入
3
Rock Scissors
Paper Paper
Rock Paper
样例输出
Player1
Tie
Player2
提示
Rock是石头，Scissors是剪刀，Paper是布。*/

#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (; n>0; n--) {
        char str1[10], str2[10];
        cin >> str1 >> str2;
        if (strcmp (str1, str2) == 0)
            cout << "Tie" << endl;
        else if (strcmp(str1, "Rock")==0 && strcmp(str2, "Scissors")==0) 
            cout << "Player1" << endl;
        else if (strcmp(str1, "Scissors")==0 && strcmp(str2, "Paper")==0)
            cout << "Player1" << endl;
        else if (strcmp(str1, "Paper")==0 && strcmp(str2, "Rock")==0)
            cout << "Player1" << endl;
        else 
            cout << "Player2" << endl;
    }

    return 0;
}