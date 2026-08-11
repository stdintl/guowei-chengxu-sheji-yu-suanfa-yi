/*那么好了,年轻的入.现有一个长度为n的数组a,需要你执行n-1次以下操作:
1.选择1个索引i(1≤i≤|a|,|a|表示当前长度a).规定x=ai.
2.对所有1≤j≤|a|, 更新aj=aj⊕ai,其中⊕是异或操作.
3.从数组中移除ai.
在经过n-1次操作后,数组只剩下一个元素,求该元素的最大可能值.
每个测试包含多个测试用例。第一行是测试用例数量 t（1≤t≤100）。接下来是各个测试用例的描述。
每个测试用例第一行是一个整数n(2≤n≤3105)——数组的初始长度。
第二行包含 n 个整数 a1,a2…,an（0≤ai≤1e9）——数组元素。
保证所有测试用例中n 的总和不超过3105.*/

//等价于任取两个数异或
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    cin >> t;
    for (; t>0; t--) {
        cin >> n;
        vector <int> num(n+10);
        vector <int> yh(n+10);
        for (int i=0; i<n; i++) 
            cin >> num[i];
        
        int max = INT_MIN;
        for (int i=0; i<n-1; i++)
            for (int j=i+1; j<n; j++) {
                yh[i] = num[i] ^ num[j];
                max = yh[i]>max ? yh[i]:max;
            }
        cout << max << endl;
    }
    return 0;
}