/*你的 “生命值” 是正整数 n
红莲会对你发动 m 次分身攻击，每次攻击用一个数字 k 来 “砍” 你：
若 n % k == 0：你没挡住这一刀，直接暴毙，挑战失败
若 n % k != 0：你完美格挡，安全
成功挡住所有 m 次攻击，挑战成功

第一行输入两个正整数 n 和 m，分别代表你的生命值和分身攻击次数。
第二行输入 m 个正整数 k₁, k₂, …, kₘ，代表每次分身攻击的数值。
1 ≤ n ≤ 10¹²
1 ≤ m ≤ 10⁵
1 ≤ kᵢ ≤ 10¹²
如果成功挡住所有攻击，输出一行字符串："Clear!"如果中途被任意一次攻击命中，输出一行字符串：“Defeated…”*/

#include <iostream> 
using namespace std;

int main () {
    int n, m, k;
    cin >> n >> m;
    for (; m>0; m--) {
        cin >> k;
        if (n%k == 0) {
            cout << "Defeated..." << endl;
            return 0;
        }
    }
    cout << "Clear!" << endl;
    return 0;
}