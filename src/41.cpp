#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, m, n;
    cin >> l >> n >> m;
    vector <int> num(n+2);
    for (int i=1; i<=n; i++) 
        cin >> num[i];
    num[n+1] = l;    
    int diff = l;
    int count = 0;
    while (1) {
        for (int i=1; i<=n+1; i++) {
            if (num[i]-num[i-1] > diff)
                count ++;
            if (count > m)
                break;
        }
        if (str[j]==0) {
            cout << str[i] << endl;
            return 0;
        }
    } 
    if (str[i] == 0) {
        cout << "no" << endl;
    }

    return 0;
}