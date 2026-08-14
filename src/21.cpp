/*实验室里有 N 个密封盒，编号为 1 到 N。
初始状态：1 号盒子里装着一颗具有“量子叠加态”的红球，而其他盒子（2 到 N）里各装有一颗普通的白球。
混乱操作：研究员 Snuke 接连进行了 M 次盲操。每次操作他会选定两个盒子 (x i ,y i )，从 x i盒中随机摸出一颗球放入 y i盒。
核心规则:
盲摸可能性：由于是盲操作，如果 x i盒中同时存在红球和白球，他可能摸出红球，也可能摸出白球。
风险传递：一旦红球可能存在于 x i盒，且你从中取球放入 y ，那么 y i​ 盒从此也变得“不安全”（即可能含有红球）。
空盒效应：如果一个盒子里的球被摸光了（数量变为 0），那么红球绝对不可能再残留在该盒中，该盒重置为“安全”状态。
任务:
请计算在所有 M 次操作结束后，理论上可能含有那颗红球的盒子总数。*/

#include <bits/stdc++.h>
using namespace std;

struct T {
    int num;
    bool stat;
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <T> qq(n+10);
    for (int i=1; i<=n; i++)
        qq[i].num = 1;
    qq[1].stat = 1;

    for (int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        if (qq[x].stat) 
            qq[y].stat = 1;
        qq[x].num--;
        qq[y].num++;
        if (qq[x].num == 0)
            qq[x].stat = 0;
    }

    int count = 0;
    for (int i=1; i<=n; i++) 
        if (qq[i].stat)
            count++;
    cout << count << endl;
    
    return 0;
}