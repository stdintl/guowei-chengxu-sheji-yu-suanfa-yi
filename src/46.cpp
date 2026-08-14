/*给定一组非负整数 nums，重新排列每个数的顺序（每个数不可拆分）使之组成一个最大的整数。注意：输出结果可能非常大，
所以你需要返回一个字符串而不是整数。
第一行输入一个正整数 n，代表数字的个数。
第二行输入 n 个非负整数。
输出拼接得到的最大整数，以字符串形式输出。*/

#include <bits/stdc++.h>
using namespace std;
struct T {
    bool operator() (const string & a, const string & b) const {
        return a+b > b+a;
    }
};

int main () {
    int n;
    cin >> n;
    vector <string> num(n);
    for (int i=0; i<n; i++) 
        cin >> num[i];
    sort(num.begin(), num.end(), T());
    if (num[0][0] == '0') 
        cout << 0 << endl;
    else {
        for (int i=0; i<n; i++) 
            cout << num[i];
        cout << endl;
    }
    return 0;
}