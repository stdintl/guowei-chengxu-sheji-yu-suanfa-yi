#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector <int> num(n+10);
    vector <long long> sum(n+10);
    vector <long long> sumk(n+10);
    for (int i=1; i<=n; i++) {
        cin >> num[i]; 
        sum [i] = num[i] + sum[i-1];
    }
    long long max = LLONG_MIN;
    for (int i=0; i<n-k+1; i++) { 
        sumk[i] = sum[i+k] - sum[i];
        max = sumk[i] > max ? sumk[i] : max;
    }

    cout << max << endl;
    
    return 0;
}