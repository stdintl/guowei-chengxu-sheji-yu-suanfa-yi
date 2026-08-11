/*在算法大陆，每个小写英文字母都对应一个唯一的 ASCII 符文值，也就是该字母在 ASCII 表中的十进制数值（例如 a 对应 97，b 对应 98，以此类推）。
我们定义一个非空连续子串为「完美符文串」，当且仅当：这个子串中所有字符的 ASCII 符文值依次异或的结果，恰好等于该子串第一个字符的 ASCII 符文值。
现在，零神给了你一个仅由小写英文字母组成的字符串 s，请你计算这个字符串中，一共有多少个「完美符文串」。
第一行：一个整数 n，表示字符串的长度（1 ≤ n ≤ 1e5）
第二行：一个长度为 n 的字符串 s，仅由小写英文字母组成
输出一个整数，表示「完美符文串」的总数量*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector <int> num(n+10);
    long long count = 0;
    for (int i=1; i<n; i++) 
        if (s[i] == s[i-1])
            num[i] = 1;
    cout << count << '\n';

    return 0;
}