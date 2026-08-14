/*字符串 s 长度为 n，最初 s 只包含小写拉丁字符。
在一个操作中，可以选择任意一对整数 (i , j) ，使得：
1 ≤ i < j ≤ n;
si = sj ≠ * ；
sk = * 的所有 i<k<j 。
如果不存在这样的 i,j ，那么停止操作。否则，将设置 si:= * 和 sj:= * 。
停止操作后，当且仅当 s 中的每个字符都等于 * 时，输出YES，否则输出NO。
第一行包含一个整数 t (1≤t≤100)，即测试用例的数量。
每个测试用例的第一行包含一个整数 n (1≤n≤5000)，即字符串的长度。
每个测试用例的第二行包含一个由小写拉丁字符组成的字符串 s 。
所有测试用例中 n 的总和不超过 5000 。
在每行输出每个测试用例的答案。如果能使 s 中的每个字符都等于 * ，则输出 “YES”（不带引号）。否则，输出 “NO”（不带引号）。*/

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
        stack <char> ch;
        for (int i=0; i<n; i++) {
            char temp;
            cin >> temp;
            if (!ch.empty() && temp == ch.top()) 
                ch.pop();
            else 
                ch.push(temp);
            
        }
        
        if (ch.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;


}