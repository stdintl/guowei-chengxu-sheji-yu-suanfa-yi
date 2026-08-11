/*第一行包含一个整数 t（1≤t≤5000）——测试用例的数量。
第一行包含一个整数 n（2≤n≤50）——卡牌的数量；
第二行包含 n 个字符，每个字符是 A 或 B。如果第 i 个字符是 A，则编号 i 的卡牌初始属于 Alice；否则属于 Bob。
输入数据的额外约束：每个测试用例中，Alice 和 Bob 初始至少各有一张卡牌。*/

#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	for (; t>0; t--) {
		int n;
		string win;
		cin >> n;
		vector <char> num(n+10);
		int count = 0;
		for (int i=1; i<=n; i++) {
			cin >> num[i];
			if (num[i] == 'B')
				count ++;
		}
		if (n == 2) {
			if (num[1] == 'A')
			 	win = "Alice";
			else
				win = "Bob"; 
		} 
		else {
			if (num[n]=='A' && (num[1]=='A' || num[n-1]=='A') || num[1]=='A'&& num[n-1]=='A' && count==1)
				win = "Alice";
			else 
				win = "Bob";
		}
		cout << win << endl;
	}

	return 0;
}

//游龙找突破口,不要总想着暴力