#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	int n, sum=0;
	cin >> n;
	for (int i=0; i<n;i++)
	{
		int j;
		cin >> j;
		sum += j;
	}
	
	double x = (double)sum/n;
	printf ("%d %.5lf\n", sum, x);
	
	return 0;
}