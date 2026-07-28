/*给定一个整数 n，判断它是否为质数。

输入描述

第一行一个整数 t
接下来t行，每行一个整数 n;
输出描述

对于每个测试用例，如果是质数，输出 Yes，否则输出 No。*/

#include <iostream>
using namespace std;

const int MAX = 31623;
int num[MAX+1] = {0};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    cin >> t;
    for (int i=2; i*i<=MAX; i++) {
        for (int j=i*i; j<=MAX; j+=i)
            num[j] = 1;
    } 

    for (; t>0; t--) {
        cin >> n;
        if (n<2)
            cout << "No\n";
        else {
            if (n == 2)
                cout << "Yes\n";
            else if (n%2 == 0)
                cout << "No\n";
            else {
                bool check = true;
                for (int i= 3;i*i<=n&& i<=MAX;i+=2) {
                    if (num[i]==0 && n%i==0){
                        cout << "No\n";
                        check = false;
                        break;
                    }
                }
                if (check)
                    cout << "Yes\n";
            }
        }
    } 
    return 0;
}

//注意数组不要越界(running error)



