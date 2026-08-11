/*蓝桥杯的前两到题一般是填空，这里就让我们提前体验一下蓝桥魅力吧！@^@
计算 0 到 9999 中，连续数字组合 “26” 一共出现了多少次？（例：2600算1次，2626算1次 ）*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int count = 0;
    for (int i=26; i<10000; i++) {
        string x = to_string (i);
        for (int j=0; j<x.size()-1; j++)
            if (x[j]=='2' && x[j+1]=='6') {
                count ++;
                break;
            }
    }
    cout << count << endl;

    return 0;
}