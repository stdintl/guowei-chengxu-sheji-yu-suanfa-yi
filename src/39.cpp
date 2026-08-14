#include <bits/stdc++.h>
using namespace std;

int bitManipulation3(int n, int i) {
    return n ^ ((-1)>>(32-i)<<(32-i));
}

int main() {
	int t, n, i;
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