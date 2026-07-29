/*输入包含多组测试数据。第一行输入一个整数T(1<=T<=100)表示测试用例数量，每组测试用例包含：

第一行两个整数n和k(1<=n<=100,1<=k<=109)分别表示订单数量和猪咪工厂每日产能。

接下来n行中，第i行包含两个整数ai和bi(1<=ai,bi<=109),表示第i份订单要求在第ai天结束时交付bi件商品。

输出描述

对于每组测试用例输出一行。如果猪咪工厂能完成所有订单则输出“你才是猪咪”,否则输出“我是猪咪”*/
#include <iostream>
using namespace std;

struct A {
    int day;
    int num;
};
void bubble (A mess[], int size);

int main () {
    int T;
    A mess[100];
    cin >> T;
    for (; T>0; T--) {
        long long n, k;
        cin >> n >> k;
        for (int i=0; i<n; i++) 
            cin >> mess[i].day >> mess[i].num;

        //排序
        bubble (mess, n);

        //累加猪咪数量
        long long sum[100]={};
        for (int i=0; i<n; i++) 
            for (int j=0; j<=i; j++)
                sum[i] += mess[j].num;
        
        int check =1;
        for (int i=0; i<n; i++) 
            if (k*mess[i].day < sum[i]){
                cout << "我是猪咪" << endl;
                check = 0;
                break;
                
            }
        if (check)
            cout << "你才是猪咪" << endl;
    }

    return 0;
}


//冒泡排序
void bubble (A mess[], int size) {
    for (int i=size-1; i>0; i--) {
        for (int j=0; j<i; j++) {
            if (mess[j].day > mess[j+1].day) {
                A temp = mess[j];
                mess[j] = mess[j+1];
                mess[j+1] = temp;
            }
        }
    }
}