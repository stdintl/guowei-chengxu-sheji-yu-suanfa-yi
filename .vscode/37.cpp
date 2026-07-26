/*
写出函数中缺失的部分，使得函数返回值为一个整数,该整数的第i位和m的第i位相同，其他位和n相同。

请使用【一行代码】补全bitManipulation1函数使得程序能达到上述的功能
*/

#include <iostream>
#include <cstdio>
using namespace std;

int bitManipulation1(int n, int m, int i) {
    return ((m & (1 << i)) | ((n | (1 << i))^(1<<i)));
	//return (m & (1<<i)) | (n & ~(1<<i));
}

int main() {
	int n, m, i, t;
	cin >> t;
	while (t--) { 
		cin >> n >> m >> i;
		cout << bitManipulation1(n, m, i) << endl;
	}
	return 0;
}

/*
反推：i位相同——》
n&m ：m第i位不变，其余为1；n第i位为1，其余不变；*
n|m ：m第i位不变
与m第i位/n其他位相同——》对应位不变（取反是相对和可逆的，可转化为其他位的取反）
——》其余位均为0或均为1（m与N相同）；
*/

/*
tip:
1)(n & ~(1<<i))实现将特定位置置0；
2）！运算优先级（分不清可直接用括号）
*/