/*道路总长度为 L（起点到终点的距离）。起点和终点之间原本有 N 个路标，每个路标与起点的距离为
D_i（严格递增，且 0 < D_i < L）。薇尔莉特可以从起点出发，每次跳到下一个路标或终点，
她可以移除至多 M 个路标（不能移除起点和终点）。
移除后，她将按顺序依次经过剩余的路标（包括起点和终点），并计算相邻两点之间的距离。
她希望这些距离中的最小值尽可能大。请输出这个最大值。
第一行三个整数 L, N, M，含义如上。
接下来 N 行，每行一个整数 D_i，表示第 i 个路标与起点的距离。
数据范围：1 ≤ L ≤ 1e9，0 ≤ M ≤ N ≤ 50000，0 < D_i < L，且 D_i 严格递增。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, m, n;
    cin >> l >> n >> m;
    vector <int> num(n+2);
    for (int i=1; i<=n; i++) 
        cin >> num[i];
    num[n+1] = l;    
    int diff = l;
    int count = 0;
    while (1) {
        for (int i=1; i<=n+1; i++) {
            if (num[i]-num[i-1] > diff)
                count ++;
            if (count > m)
                break;
        }
        int te
    }
}