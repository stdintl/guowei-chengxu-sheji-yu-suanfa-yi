#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	int a, b, c;
	char x;
	cin >> a >> b >> x;
	switch (x)
	{
		case '+':
			c = a+b;
			break;
		case '-':
			c = a-b;
			break;
		case '/':
			c = a/b;
			break;
		default :
			c = a*b;
			break;
	}
		
	if ( x=='/' && b==0)
		cout << "Divided by zero!" << endl;
	else if (x!='+' && x!='-' && x!='/' && x!='*' )
		cout << "Invalid operator!"  << endl;
	else 
		cout << c << endl;
		
	return 0;
		
}