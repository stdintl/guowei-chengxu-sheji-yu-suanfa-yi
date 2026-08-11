/*数组a中包含n个元素，第i个元素为ai，对每个元素进行一次操作，操作顺序自行选择。对第i个元素进行以下操作：将ai右边的第一个元素减少到与ai相同。
意思是，假设j>i，j是aj>ai的最小索引，如果存在这样的j，aj会被替换为ai，若不存在则无事发生。
目的是在所有可能的运算顺序中，找到进行过操作的数组a的总和的最小值。
每个测试包含多个测试用例。第一行为测试用例的数量t（1≤t≤500）。测试用例说明如下：
每个测试用例的第一行包含一个整数n（1≤n≤100）- 元素的数量
下一行包含n个整数 a1,a2,…,an（1≤ai≤1000）- 元素的大小
对于每个测试用例，每行输出一个整数——在所有可能的操作顺序中，元素大小的最终总和的最小值。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    cin >> t;
    for (; t>0; t--) {
        cin >> n;
        int temp, min=INT_MAX;
        int sum = 0;
        for (int i=0; i<n; i++) {
            cin >> temp;
            if (temp < min) 
                min = temp; 
            sum += min;
        }
        cout << sum << '\n';
    }

    return 0;
}