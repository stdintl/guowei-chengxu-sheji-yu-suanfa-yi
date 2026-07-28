/*多组测试。
每组第一行输入1个整数n（n<20),
第二行输入n个整数
第三行输入1个整数m。

删除在第一行的n个整数中第一次出现数字m并删除，然后按照顺序输出剩下的数。*/

#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, m;
    cin >> n;
    vector <int> num(n);
    for (int i=0; i<n; i++) 
        cin >> num[i];
    cin >> m;
    int check =1;
    for (int i=0; i<n; i++) {
        if (num[i]==m && check) {
            check = 0;
            continue;
        }
        cout << num[i];
        if (i == n-1)
            cout << endl;
        else 
            cout << ' ';
    }
    
    return 0;
}