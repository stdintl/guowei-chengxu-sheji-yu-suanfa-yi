/*zzh为了自己的可以去到岚语峰，zzh会在其余两人没在意的情况下偷偷动用魔法把他们的骰子数减去1。
（当然他们都很信任zzh，所以他们并不真的在意zzh会不会作弊）
如果对方骰子数是1，那么他会摧毁这枚骰子，那么被摧毁的这枚骰子数变为0；
单组输入:
文件中唯一包含两个自然数a 和 q 表示掷骰的结果。

输出描述

输出一个最简分数 A/B，
其中 A 为分子，B 为分母。
若概率为 0，输出 0/1
若概率为 1，输出 "happy"*/

#include <iostream>
using namespace std;

int main () {
    int a, q;
    cin >> a >> q;
    a -= 1;
    q -= 1;
    if (q < a) 
        q = a;
    int k = 6 - q;
    if (k == 6) 
        cout << "happy" << endl;
    else {
        if (k == 1 || k == 5 || k == 0)
            cout << k << "/6" << endl;
        else if (k == 2)
            cout << "1/3" << endl;
        else if (k == 3)
            cout << "1/2" << endl;
        else 
            cout << "2/3" << endl;
    }
    return 0;
}