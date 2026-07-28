/*“(” 表示打开一个柜子,“)” 表示关上一个柜子
任何时刻，都不能出现“柜子还没打开就先关上”的离谱操作；
最后所有打开过的柜子都必须关好，不能摆烂。

输入一个字符串s，保证只由‘（’和‘）’构成

如果@-@的操作规范就输出：
“哦，谢天谢地！”

否则输出：
“哦不，我的套娃柜QAQ！！！"*/

#include <iostream> 
using namespace std;

int main () {
    int count = 0;
    char ch;
    while (cin >> ch) {
        if (ch == '(')
            count ++;
        else 
            count --;
        
        if (count < 0) 
            break;
    }

    if (count == 0) 
        cout << "哦，谢天谢地！" << endl;
    else
        cout << "哦不，我的套娃柜QAQ！！！" << endl;

    return 0;
    
}