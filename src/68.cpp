/*木桶底部是半径为 r 米的圆形，侧面由 n 个高矮不一的木板围绕而成，其中第 i 块木板的高度为 ai米。请问在不倾斜木桶的情况下，这个木桶最多能装多少立方厘米的水。

输入描述

第一行输入两个整数 n 和 r（1 ≤ n ≤ 10⁵，1 ≤ r ≤ 104），分别表示木桶侧面的木板数量和木桶底部的圆形半径。
第二行输入 n 个整数 a₁, a₂, …, aₙ（1 ≤ ai ≤5×10⁴），分别表示每块木板的高度，单位为米。

输出描述

输出一个整数，表示木桶最多能装的立方厘米水。*/

#include <iostream> 
using namespace std;

int main () {
    long long  r, n;
    cin >> n >> r;
    int min = 10000;
    r *= 100;
    for (int i=0; i<n; i++) {
        int k;
        cin >> k;
        if (k < min)
            min = k;
    }
    //min *= 100;
    //cout << 3.14*min*r*r << endl;

    return 0;
}

//注意数据范围,不要溢出
//注意浮点数精确度,采用合适的算式

#include <iostream> 
using namespace std;

int main () {
    long long  r, n;
    cin >> n >> r;
    int min = 10000;

    for (int i=0; i<n; i++) {
        int k;
        cin >> k;
        if (k < min)
            min = k;
    }
    
    unsigned long long k = 314*r*r*min*10000;
    cout << k << endl;

    return 0;
}
