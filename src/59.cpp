/*大魔导师零零欷在秘境探险时，发现了两块蕴含着神秘能量的魔法水晶。经过检测，这两块水晶的能量值分别为正整数 a 和 b。
两块水晶的能量值 a 和 b 的最大公约数 (gcd) 必须大于 1。
零零欷必须找到两个正整数 a 和 b，使得它们的总能量 a + b 恰好落在给定的区间 [l, r] 内。
如果能找到这样的一对水晶，就请告诉零零欷它们的能量值；如果不存在，则报告 -1。
第一行包含一个整数 t（1 ≤ t ≤ 500），表示测试用例的数量。
接下来 t 行，每行包含两个整数 l 和 r（1 ≤ l ≤ r ≤ 10^7），表示总能量 a + b 必须满足的区间。
对于每个测试用例，输出一行两个整数 a 和 b，满足上述所有条件。
如果不存在这样的 a 和 b，则输出一行一个整数 -1。
如果存在多个答案，输出任意一个均可。*/

#include <bits/stdc++.h>
using namespace std;

int num[10000] = {};
int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i=0; i<10000; i++) 
        num[i] = 1;
    for (int i=2; i<10000; i++) 
        for (int j=i+i; j<10000; j+=i) 
                num[j] = 0; 

    int t;
    cin >> t;
    for (; t>0; t--) {
        int l, r;
        cin >> l >> r;
       
        if (r <= 3)
            cout << -1 << '\n';
        else if (r!=l) {
            if (l <= 3)
                cout << 2 << ' ' << 2 << '\n';
            else  
                cout << (l+1)/2 << ' ' << (l+1)/2 << '\n';        
        }
        else {
            int check = 1;
            for (int i=2;i*i<=r; i++) {
                if ( num[i] && r % i == 0){
                    cout << i << ' ' << r-i << '\n';
                    check = 0;
                    break;
                }
            }
            if (check )
                cout << -1 << '\n';
        }
    }

    return 0;
}