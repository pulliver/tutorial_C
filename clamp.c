
#include <stdio.h>

int clamp2 (int x, int lower, int upper){
	if (x < lower)
		return lower;
	else
		if (x > upper)
			return upper;
	return x;
}

int clamp(int x, int lower, int upper){
	int r;
	
	(((x < lower) && (r = lower)) || ((x > upper) && (r = upper)) ) || (r = x);

	return r;
}

int main (){
	const int start = -2, end = 4;
	int point = 10;
	
	printf("%d\n",clamp(point, start, end));
}
