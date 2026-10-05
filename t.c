
#include <stdio.h>


int main(){
	int lower = -2, upper = 4, x = -5;
	int r;
//	printf("%d\n", ((x < lower && (r = lower)) || (x > upper && (r = upper)) || (r = x), r));
	printf("%d\n", (r = (x < lower) ? lower : (x > upper) ? upper : x));
}

