/*nanna 手里有两个长度相同的数组，初始数组 nums 和目标数组 target。
每一次操作，nanna 可以任选一段连续子数组，将区间内所有数字统一 +1 或者 -1。
请求出把 nums 变换成 target 需要的最少操作次数。
第一行输入整数 n，代表数组长度。
第二行 n 个整数，代表数组 nums。
第三行 n 个整数，代表数组 target。
输出一行整数，代表最小操作次数。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector <int> num1(n+10);
    vector <int> num2(n+10);
    vector <int> diff(n+10);

    for (int i=1; i<=n; i++)
        cin >> num1[i];
    for (int i=1; i<=n; i++)
        cin >> num2[i];
    for (int i=1; i<=n; i++)
        diff[i] = num2[i] - num1[i];

    int sum = 0;
    for (int i=1; i<=n; i++) {
        int temp = diff[i] - diff[i-1];
        if (temp > 0)
            sum += temp;
    }
    cout << sum << '\n';

    return 0;
}