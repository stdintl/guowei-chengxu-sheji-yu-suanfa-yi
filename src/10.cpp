#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	double r;
	scanf ("%lf", &r);
	double v = 4.0/3 * 3.14 * r * r * r;
	printf ("%.2lf", v);
	
	return 0;
	
}