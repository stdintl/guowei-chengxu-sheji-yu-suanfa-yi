/*在某一天，天天宅在家的LP与KT被一股神秘力量拉入了代码世界，从高空落下，掉入字母河中，眼看就要被淹死，一条鱼游了过来，交给他们一个魔法
具体来说，你需要将子母河中的小写字母变成大写字母，以此来让LP与KT上浮

输入描述

第一行输入n表示字符串大小
第二个输入n个字符
1<=n<=1e6

输出描述

输出一串大写字母*/

#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int n;
    cin >> n;
    cin.ignore(); 
    char str[1000000]={0};
    cin.getline (str, sizeof(str));

    for (int i=0; i<n; i++) {
        if(str[i]>='a' && str[i]<='z')
       		str[i] = str[i] + 'A'-'a';
        cout << str[i];
    }
    cout << endl;
    
    return 0;
}