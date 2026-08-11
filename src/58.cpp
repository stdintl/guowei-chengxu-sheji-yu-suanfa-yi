/*根据这四个正整数，通过两两配对求和，还原出所有可能的房间尺寸组合 (W,H)。帮助小牛牛守住属于他的红烧肉和鸡腿。

第一行一个正整数 T，表示老六头今天一共让 小牛 算了多少个房间。
接下来 T 行，每行四个正整数 

先输出一个整数 K，表示可能的尺寸组合数。
随后 K 行，按 W 升序排列输出 W 和 H；若 W 相同，则按 H 升序排列。
注意： 同样的尺寸（如 5×5）只算一种，别写重了。*/

#include <bits/stdc++.h>
using namespace std;

struct room {
    int x;
    int y;
};
bool cmp (room a, room b){
        if (a.x != b.x)
            return a.x < b.x;
        else
            return a.y < b.y;
    }
int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (; t>0; t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        room way[6] = {{a+b,c+d}, {a+c,b+d}, {a+d,b+c}, {c+d,a+b}, {b+d,a+c}, {b+c,a+d}};

        sort (way, way+6, cmp);
        int count = 1;
        for (int i=1; i<=5; i++) {
            if (way[i].x != way[i-1].x && way[i].y != way[i-1].y)
                count ++;
        }

        cout << count << '\n' << way[0].x << ' ' << way[0].y;
        for (int i=1; i<=5; i++) {
            if (way[i].x != way[i-1].x && way[i].y != way[i-1].y)
                cout << way[i].x << way[i].y << '\n';
        }
    }
}