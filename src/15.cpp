#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	int n, x, y;
	cin >> n >> x >> y;
	int i;
	if (y%x == 0)
		i = n - y/x;
	else 
		i = n - y/x - 1;
		
	if (i>0)
		cout << i << endl;
	else 
		cout << "0" << endl;
		
	return 0;
	
}