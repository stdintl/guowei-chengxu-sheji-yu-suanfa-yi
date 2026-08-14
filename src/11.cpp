#include <iostream>
#include <cstdio>
using namespace std;
#define Pi 3.14159
int main ()
{
	int r, h;
	
	scanf ("%d %d", &h, &r);
	double v = Pi * r * r * h;
	int num = 20000 / v + 1;
	printf ("%d\n", num);
	
	return 0;
	
}