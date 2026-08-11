/*现在有一个初始为空的舞池，随后会发生 Q 个事件。每个事件属于以下三种类型之一：
1.高雅入场：一只编号为 x 的企鹅滑入舞池。保证此时舞池中没有编号为 x 的企鹅。
2.高雅离场：一只编号为 x 的企鹅觉得不够高雅，离开了舞池。保证此时编号为 x 的企鹅恰好在舞池中。
3.高雅询问：一只编号为 x 的企鹅向你询问：当前舞池中，编号严格大于 x 的所有企鹅中，编号最小的那只是多少？
第一行包含一个正整数 Q，表示事件的总数。
接下来的 Q 行，每行包含两个整数 op 和 x。
·op=1：表示编号为 x 的企鹅入场。
·op=2：表示编号为 x 的企鹅离场。
·op=3：表示一次高雅询问。
1≤Q≤3×10 5
1≤op≤3
1≤x≤10 18
对于每一个 op=3 的询问：
输出一行一个整数，代表满足条件的最小编号。
如果舞池中没有任何一只企鹅的编号大于 x，请输出一行字符串：何意味?！。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin >> q;
    multiset <long long> ero; 
    for (int i=0; i<q; i++) {
        int op;
        long long x;
        cin >> op >> x;
        switch (op) {
            case 1: ero.insert (x);
                    break;
            case 2: ero.erase (x);
                    break;
            case 3: auto k = ero.upper_bound(x);
                    if (k != ero.end())
                        cout << *k << endl;
                    else
                        cout << "何意味?!" << endl;
                    break;
        }
    }

    return 0;

}