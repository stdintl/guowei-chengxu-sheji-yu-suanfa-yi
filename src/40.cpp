/*有 100 个房间排成一列，之间有 99 个门; 第 i 个门连接第 i 个房间和第 i+1 个房间。每扇门可以上锁也可以不上锁。最初，所有的门都没有锁。
亚瑟在 [l,r] 的某个房间里;
zzh 在 [L,R] 的某个房间里;
亚瑟和zzh在不同的房间。
然而，你并不知道他们所在的确切房间。
你不希望zzh和亚瑟能够联系到对方，所以你要锁上一些门来防止这种情况发生。无论 zzh 和 亚瑟 在给定段中的起始位置如何，
您需要锁定的门的最小数量是多少？

输入格式
第一行包含单个整数 t (1≤t≤10^4^)ー测试用例的数量。

每个测试用例的第一行包含两个整数 l 和 r(1≤l<r≤100) ーー zzh 所在房间段。

每个测试用例的第二行包含两个整数 L 和 R(1≤L<R≤100) ーー 亚瑟 所在房间段。

输出描述

输出格式
对于每个测试用例，打印一个整数ーー必须锁定的门的最小数目，以便 zzh 和 亚瑟 不能相遇，而不管它们在给定段中的起始位置如何。*/
#include <iostream>
using namespace std;

int main () {
    int t;
    int l, r, L, R;
    cin >> t;
    for (; t>0; t--) {
        int count = 0;
        cin >> l >> r >> L >> R;
        if (l > L) {
            int t = l;
            l = L;
            L = t;
            int t1 = r;
            r = R;
            R = t1;
        }  
        if (L == r)
            count = 2;
        else if (L > r)
            count = 1;
        else {
            if (l == L){
                if (r == R)
                    count = r-l;
                else if (R > r) 
                    count = r-l+1;
                else
                    count = R-L+1;
            } else {
                if (r == R)
                    count = R-L+1;
                else if (R > r) 
                    count = r-L+2;
                else
                    count = R-L+2;
            }
        }

        cout << count << endl;
    }
    return 0;
}















