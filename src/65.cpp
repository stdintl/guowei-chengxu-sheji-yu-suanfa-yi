/*给你一个由 n个整数a1,a2,…,an组成的数组。你可以执行一次下面的操作：选择一个整数 x（可能是负数），对每个值 i(1≤i≤n)，使 ai=ai+x。
执行运算后，输出 MEX(a)* 的最大可能值。
*MEX(a)被定义为数组中不存在的最小非负整数。例如， MEX([0,1,2]) 是 3， MEX([1,2,5]) 是 0。
输入的第一行包含一个整数 t (1≤t≤1000) - 测试用例数。
每个测试用例的第一行包含一个整数 n (1≤n≤3000) - 数组 a的长度。
第二行包含 n个整数 a1,a2,…,an (−109≤ai≤109) - 数组 a 。
保证所有测试用例中 n 的总和不超过 3000 。
针对每个测试用例，在执行操作后输出 MEX(a) 的最大可能值。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (; t>0; t--) {
        int n;
        cin >> n;
        int max = 1;
        int temp = 1;
        set <int> num;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            num.insert (x);
        }

        auto i = num.begin();
        for (auto j = next(i); j != num.end(); i++,j++) {
            if (*i+1 == *j) {
                temp ++;
                if (temp > max)
                    max = temp;
            }
            else 
                temp = 1;
        }
        cout << max << '\n';
        
    }

    return 0;
}