/*一开始有一个长度为 n 的数组，数组内所有数字初始都是 0。
每一次操作，nanna 可以任选一段连续子数组，把区间内每一个数字都加上 1。现在给定目标数组 target，请求出从全零数组变换到目标数组，最少需要多少次操作。

第一行输入一个整数 n，代表数组长度。
第二行输入 n 个整数，依次为数组 target 的各个元素。

输出一行一个整数，表示最小操作次数。
答案保证在 32 位整数范围内。*/

#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int>num(n);
    for (int i=0; i<n; i++) {
        cin >> num[i];
    }
    int sum = 0;
    //调用函数,每一次都得到最低,划分为不同部分,再重复该步骤;
    for (int i=1; i<n-1; i++) {
        if (num[i] > num[i+1] && num[i] > num[i-1])
            sum += num[i];
    }
    if (num[0]>num[1])
        sum += num[0];
    if (num[n-1] > num[n-2])
        sum += num[n-1];
    cout << sum << endl;

    return 0;

}