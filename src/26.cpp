/*收服：如果当前有存活的怪兽 i 满足 a i≤c，锅锅可以直接用气场将其震服。收服后，锅锅的 C 值会吸收该怪兽的含金量，即 c←c+a i，
然后怪兽消失。
投掷拖鞋：向任意一只存活的怪兽 i 扔出一只拖鞋。拖鞋会精准地糊在怪兽脸上并损坏。怪兽被激怒，含金量提升——它的 a i会永久增加 1。
每扔一次消耗一只拖鞋。
第一行一个整数 t (1≤t≤500)，表示共有 t 组测试数据。
第一行包含三个整数 n,c,k (1≤n≤100, 0≤c,k≤10 9)，分别表示怪兽数量、初始 C 值、祖传拖鞋数量。
第二行包含 n 个整数 a ，表示每只怪兽的初始含金量。
输出描述
对于每组测试数据，输出一行一个整数，表示锅锅最终能达到的最大 C 值。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t, n, c, k;

    cin >> t;
    for (; t>0; t--) {
        cin >> n >> c >> k;
        multiset <int> num;
        for (int i=0; i<n; i++) {
            long long ore; 
            cin >> ore;
            num.insert(ore);
        }


        while (!num.empty()) {
            auto temp = num.begin();
            long long tempi = *temp;
            if (tempi <= c) {
                if (k > c-tempi) {
                    k -= c-tempi;
                    c += c;
                    num.erase(temp);
                }
                else if (k>0) {
                    c += k + tempi;
                    k = 0;
                    num.erase(temp);
                }
                else {
                    c += tempi;
                    num.erase(temp);
                }
            } else 
                break;
        } 
        cout << c << endl;
    }
    return 0;
}