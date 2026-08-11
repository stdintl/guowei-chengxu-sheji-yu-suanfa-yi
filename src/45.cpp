/*森林里有 n只小动物竞选大王，它们编号 0∼n−1围成一圈。规则：从编号为 k的小动物开始，依次传递魔法果实并报数（1,2,…,m），
报到 m的小动物淘汰；下一轮从被淘汰者的下一只小动物开始重新报数，循环直到只剩最后一只小动物，即为森林大王。
给定 n,k,m，请输出大王的编号。
一行三个正整数 n,k,m
1≤n≤1000
0≤k<n
1≤m≤1000
一个整数，表示大王的编号*/

#include <bits/stdc++.h>
using namespace std;

int ce (int n, int m);

int main () {
    int n, k, m;
    cin >> n >> k >> m;

    cout << (ce(n, m)+k)%n;
}

int ce (int n, int m) {
    if (n == 1)
        return 0;
    return (ce(n-1, m)+m) % n;
}