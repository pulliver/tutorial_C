
#include <stdio.h>

int gcd(int a, int b){
/*
	caso base		a % b == 0 allora return b
	operazione		!= 0 allora gcd (b, a%b)
	ricorsione		
 */	
	return b ? (a%b) ? gcd( b, (a%b) ) : b : a ;
//	return (a%b) ? gcd(b, a%b) : b;
}

int main(int argc, char **argv)
{
	int num1 = 17, num2 = 5;
	printf("Il MCD di %d e %d è: %d", num1, num2, gcd(num1, num2));
	return 0;
}

