/*nanna 公司计划安排 2n 名员工参加线下面试，面试地点分为 A 市与 B 市。
已知第 i 名员工前往 A 市的花费为 (a_i)，前往 B 市的花费为 (b_i)。

输入描述

第一行一个整数 m，代表员工总人数，保证 m 为偶数，(m=2n)。
接下来 m 行，每行两个整数 (a_i,b_i)，依次代表第 i 个人去往 A 市、B 市的路费。

输出描述

输出一行一个整数，表示满足条件的最小总花费。*/

#include <iostream>
#include <vector>
using namespace std;

struct A {
    int a;
    int b;
    int cmp;
};
void bubble (A men[], int m);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m;
    cin >> m;
    vector<A>men(m);
    for (int i=0; i<m; i++) {
        cin >> men[i].a >> men[i].b;
        men[i].cmp = men[i].b - men[i].a;
    }

    bubble (&men[0], m);
    int sum = 0;
    for (int i=0; i<m/2; i++) 
        sum += men[i].b;
    for (int i=m/2; i<m; i++)
        sum += men[i].a;

    cout << sum << endl;

    return 0;
}

//冒泡排序
void bubble (A men[], int m) {
    for (int i=m-1; i>0; i--) {
        for (int j=0; j<i; j++) {
            if (men[j].cmp > men[j+1].cmp) {
                A temp = men[j];
                men[j] = men[j+1];
                men[j+1] = temp;
            }
        }
    }
}

