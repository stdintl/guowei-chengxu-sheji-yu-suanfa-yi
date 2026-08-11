/*电子奶牛被牢牢钉在数轴上的 K 点（0～100,000），全程一动不动，仿佛在等一份永远凉不了的披萨。
约翰自己此时站在 N 点（0～100,000），手里只有两件神器：
步行鞋：每穿一步，位置 +1 或 –1，耗时 1 秒（但数轴两端是悬崖，0 和 100,000 之外会掉进黑洞，所以不能越界）。
传送披萨盒：每打开一次，当前位置立刻 翻倍（X → 2X），同样耗时 1 秒——但这盒子有魔法，必须整数使用,
且翻倍后如果超出范围，盒子会自爆，所以也得小心。
一行两个整数 N 和 K，用空格隔开。
范围：0 ≤ N, K ≤ 100,000。
输出一个整数，表示最短所需秒数。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k, n, count=0;
    cin >> n >> k;
    if (n >= k)
        count = n-k;
    else if (k - n == 1)
        count = 1; 
    else {
        if (k % 2 == 1) {
            count ++;
            k--;
        }
      
        int mid = k/2;
        if (mid <n) {
            if (n-mid+1 < k-n) 
                count += n-mid+1;
            else 
                count += k-n;    
        } else {
            int temp = mid;
            for (; mid > n; temp = mid, mid /= 2);
            if (n-mid+1 < temp-n) {
                count += n-mid+1;
                n = temp;
            }
            else {
                count += temp-n;
                n = temp;
            }
            for (; n!=k; n*=2, count++);
        }
    
        
    }
    cout << count << endl;
    return 0;
}