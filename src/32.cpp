/*给定一个 n 阶方阵，判断它是否满足：从左上角 (0,0) 出发，按顺时针方向向内螺旋，依次填入数字 1,2,3,…,n 2
第一行包含一个正整数 n (1≤n≤15)。
接下来的 n 行，每行包含 n 个整数，表示待检测的矩阵。
如果该矩阵是标准的顺时针螺旋矩阵，输出：看来我得控制一下你了❤
如果该矩阵不是标准的顺时针螺旋矩阵，输出：你的意志还在反抗，这不是真正的旋涡！*/

#include <bits/stdc++.h>
using namespace std;
bool check (int left, int right, int upper, int low, int count, vector<vector<int>> &num);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    vector <vector<int>> num(n, vector<int>(n)); 
    for (int i=0; i<n; i++) 
        for (int j=0; j<n; j++) 
            cin >> num[i][j];
    if (check(0, n-1, 0, n-1, 1, num))
        cout << "看来我得控制一下你了❤" << endl;
    else
        cout << "你的意志还在反抗，这不是真正的旋涡！" << endl;

    return 0;

}

bool check (int left, int right, int upper, int low, int count, vector<vector<int>>& num) {
    if (left > right || upper > low)
        return true; 
    
    for (int i=left; i<=right; i++) 
        if (num[upper][i] != count++)
            return false;

    for (int j=upper+1; j<=low; j++)
        if (num[j][right] != count++)
            return false;
    if (upper < low)
        for (int i=right-1; i>=left; i--)
            if (num[low][i] != count++)
                return false;
    if (right > left)
        for (int j=low-1; j>upper; j--)
            if (num[j][left] != count++)
                return false;
    return check (++left, --right, ++upper, --low, count, num);
}