/*双向奔赴 CP：只要两个人心动编号一模一样，就是灵魂契合的一对，当场牵手成功、双双退场撒狗粮；
全员成双：现场来的所有人，几乎全都两两配对成功，没人落单；
纯爱战神独苗：全场偏偏只藏着一位坚守初心的纯爱战神，TA 的心动编号全世界独一份，没有任何人能和 TA 配对，只能默默一个人看别人谈恋爱。
现在给你全场所有人的心动编号清单，找出这位孤独又专一的纯爱战神的心动编号！

输入描述

第一行一个整数 n
第二行一共 n个整数

输出描述

输出那位纯爱战神的专属心动编号
*/
// #include <iostream>
// using namespace std;

// void insert (int num[], int size);
// int num[16000000]={};

// int main () {
//     int n;
//     cin >> n;
//     for (int i=0; i<n; i++) 
//         cin >> num[i];

//     //排序
//     insert (num, n);
    
//     int i=0;
//     for (; i<n; i+=2) {
//         if (num[i] != num[i+1]) {
//             break;
//         }
//     }

//     cout << num[i] << endl;

//     return 0;
// }

// //插入排序
// void insert (int num[], int size) {
//     for (int i=1; i<size; i++) {
//         for (int j=0; j<i; j++) {
//             if (num[i] < num[j]) {
//                 int temp = num[i];
//                 for (int k=i; k>j; k--) 
//                     num[k] = num[k-1];
//                 num[j] = temp;
//                 break;               
//             }
//         }
//     }
// }

#include <iostream> 
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int k = 0;
    for (; n>0; n--) {
        int i;
        cin >> i;
        k ^= i;
    }
    cout << k << endl;

    return 0;
}

//ios::sync_with_stdio(false);
//cin.tie(0);
//ios::sync_with_stdio(false);
//cin.tie(0);
//ios::sync_with_stdio(false);
//cin.tie(0);