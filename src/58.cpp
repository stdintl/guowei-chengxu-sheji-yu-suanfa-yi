/*根据这四个正整数，通过两两配对求和，还原出所有可能的房间尺寸组合 (W,H)。帮助小牛牛守住属于他的红烧肉和鸡腿。

第一行一个正整数 T，表示老六头今天一共让 小牛 算了多少个房间。
接下来 T 行，每行四个正整数 

先输出一个整数 K，表示可能的尺寸组合数。
随后 K 行，按 W 升序排列输出 W 和 H；若 W 相同，则按 H 升序排列。
注意： 同样的尺寸（如 5×5）只算一种，别写重了。*/

#include <iostream>
using namespace std;
struct A {
    int x;
    int y;
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    A way[12]={};
    int num[4];
    int sum[6];
       
    for (; T>0; T--) {
        int su = 0;
        for (int i=0; i<4; i++) {
            cin >> num[i];
            su += num[i];
        }

    //求可能的二数之和
    int k = 0;
    for (int i=0; i<3; i++)
        for (int j=i+1; j<4; j++) {
            sum[k] = num[i] + num[j];
            k++;
        }

    //求组合数
    k = 0;
    int count = 0;
    for (int i=0; i<6; i++) {
        if (sum[i] == su/2.0) {
            count ++;
            way[k].x = way[k].y = sum[i];
            k++;
        }
        else {
            count += 2;
            way[k].x = sum[i];
            way[k].y = su - sum[i];
            k++;
            way[k].y = sum[i];
            way[k].x = su - sum[i];
            k++;
        }
    }
    

        //排序
        for (int i=count-1; i>0; i--) {
            for (int j=0; j<i; j++) {
                if (way[j].x < way[j+1].x) {
                    A temp = way[j];
                    way[j] = way[j+1];
                    way[j+1] = temp; 
                }
            }
        }
        for (int i=0; i<count-2; i++) {
            if (way[i].x == way[i+1].x && way[i].y>way[i+1].y) {
                A temp = way[i];
                way[i] = way[i+1];
                way[i+1] = temp; 
            }
        }

        cout << count << endl;
        for (int i=0; i<count; i++) {
            cout << way[i].x << ' ' << way[i].y << endl;
        }
    }
    
    return 0;
}

