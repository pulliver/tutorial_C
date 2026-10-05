#include <stdio.h>

int gcd(int a, int b){
	return b ? (a%b) ? gcd(b, a%b): b : b;
}

int main(){
	int a = 48, b = 18;
//	printf ("il resto di %d / %d è;: %d\n",a, b, a % b);
	printf ("il MCD di %d e %d è: %d\n",a, b, gcd(a, b));
}
