/*nanna 公司计划安排 2n 名员工参加线下面试，面试地点分为 A 市与 B 市。
已知第 i 名员工前往 A 市的花费为 (a_i)，前往 B 市的花费为 (b_i)。

输入描述

第一行一个整数 m，代表员工总人数，保证 m 为偶数，(m=2n)。
接下来 m 行，每行两个整数 (a_i,b_i)，依次代表第 i 个人去往 A 市、B 市的路费。

输出描述

输出一行一个整数，表示满足条件的最小总花费。*/

#include <iostream>
using namespace std;

int main () {
    int m;
    int a, b;
    int sum = 0;
    cin >> m;
    for (; m>0; m--) {
        cin >> a >> b;
        if (a>b)
            sum += b;
        else 
            sum += a;
    }
    cout << sum << endl;

    return 0;
}