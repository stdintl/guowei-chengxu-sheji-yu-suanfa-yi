/*一面矩形镜子，宽为a，高为b。一束光线从左下角以 45°角向右上方射出。
光线在镜子边界上发生反射，入射角等于反射角。
镜子四个角点分别为：左下角(0,0),右下角(a,0),左上角(0,b),右上角(a,b)。
问：光线第一次到达某个角点（不含起点）时，经过了多少次反射？
一行两个整数 a,b（1≤a,b≤10 ^9)
一个整数，表示反射次数。*/

#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    int count = 0;

    //(转化为)取a,b最小公因数;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int k = a;
    for (; k%b; k+=a);

    int x = k/a - 1;
    int y = k/b - 1;
    cout << x+y << '\n';
    return 0;
}