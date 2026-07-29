/*第一行：两个整数 n（参赛人数，1≤n≤100）和 k（大家想找的名次）。
接下来 n 行：每行包含一个选手的编号（一个整数，比如 2023001）和他的干饭成果（一个可能带小数点的重量，比如 5.2 公斤）。

输出描述

只有一行：输出排名第 k 的那位选手的编号和他的成绩(成绩省略两位小数)。*/
#include <iostream>
#include <cstdio>
using namespace std;

struct A {
    int num;
    double wgh;
};
void select (A mess[], int n, int k);
int main () {
    int n, k;

    A mess[101] = {};
    cin >> n >> k;
    for (int i=1; i<=n; i++) {
        cin >> mess[i].num >> mess[i].wgh;
    }
    select (mess, n, k);
    printf ("%d %.2lf\n", mess[k].num, mess[k].wgh);

    return 0;
}

void select (A mess[], int n, int k) {
    for (int i=1; i<=k; i++) {
        //对第1到k最大的数进行排序;
        int max = i;
        for (int j=i; j<=n; j++) {
            if (mess[j].wgh > mess[max].wgh)
                max = j;
        }
        A temp = mess[i];
        mess[i] = mess[max];
        mess[max] = temp;
    }
}