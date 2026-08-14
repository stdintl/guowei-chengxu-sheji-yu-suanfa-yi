#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	float a;
	double b;
	char x;
	int y;
	scanf ("%c %d %f %lf", &x, &y, &a, &b);
	printf ("%c %d %.6f %.6lf\n", x, y, a, b);
	
	return 0;
	
}