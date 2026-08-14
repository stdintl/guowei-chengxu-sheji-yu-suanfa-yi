#include <iostream>
#include <cstdio>
using namespace std;

int main () {
	int min, max;
	scanf ("%d %d", &min, &max);
	while (max%min != 0) {
		if (min>max) {
		min = max ^ min;
		max = min ^ max;
		min = min ^ max;
	}
	max -= min;			
	}
	cout << min << endl;
	
	return 0;
} 