/*如果数组 A=(a0,a1,⋯,an−1) 满足以下条件，就说它是一个斐波那契数组：n>2;a0=a1;
对于所有的 i≥2 都有 ai=ai−1+ai−2。
现在，给出一个数组 A，你可以执行任意次修改，每次修改将数组中的某个位置的元素修改为一个大于 0 的整数。
请问最少修改几个元素之后，数组 A 会变成一个斐波那契数组。
输入的第一行包含一个整数 n ，表示数组 A 中的元素个数。
第二行包含 n 个整数a0,a1,⋯ ,an−1，相邻两个整数之间用一个空格分隔。
输出一行包含一个整数表示最少需要修改数组 A 中的几个元素之后，数组 A 可以变为一个斐波那契数组。
对于所有评测用例，3≤n≤105，1≤ai≤106。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector <int> num(n+10);
    for (int i=0; i<n; i++)
        cin >> num[i];
    int sum = 0;
    for (int i=0; i<n-1; i++) {
        int temp = i;
        for (int j=i+1; j<n; j++,temp++) {
            if (num[j] < num[temp])  
                sum += olint;
            else 
                break;
        }
    }
    cout << sum << '\n';

    return 0;
}