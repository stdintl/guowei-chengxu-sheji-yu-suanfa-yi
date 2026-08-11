/*zzh会在自己的收纳仓中出n堆石子，并标上序号，n 堆石子的数量为 a1,a2,…,an 的石子，堆呈圆形排列。

玩家从第一堆开始，顺时针依次从一堆中取出一些正数的石头。如果一个玩家在回合中从第 i 堆取石头，另一个玩家在下一轮从 ((imodn)+1) 堆取石头。

如果玩家在回合中无法取走任何石头（因为堆是空的），他就输了。

假设 Mike 和 Joe 都采取最优策略，那么谁会赢？

请注意，每次一名玩家至少可以拿走一枚石头，最多可以拿走这一堆石头。

输出描述

对于每组数据，在输出获胜者，Mike 或 Joe*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (; t>0; t--) {
        int n;
        cin >> n;
        vector <int> num(n);
        for (int i=0; i<n; i++)
            cin >> num[i];
        string win;
        
        if (n%2 == 1) 
            win = "Mike";
        
        else {
            multiset <int> mike;
            multiset <int> joe;
            int min1, min2;
            for (int i=0; i<n-1; i++) {
                mike.insert (num[i]);
                joe.insert (num[i+1]);
            }
            auto i = mike.begin();
            auto j = joe.begin();
            for (; i!=mike.end(); i++,j++) {
                if (*i != *j) {
                    min1 = *i;
                    min2 = *j;
                    break;
                }
            }
            if (i == mike.end())
                win = "Joe";
            else {
                if (min1 < min2)
                    win = "Joe";
                else
                    win = "Mike";
            }

        }
        cout << win << endl;
    }
    return 0;
}

//游龙