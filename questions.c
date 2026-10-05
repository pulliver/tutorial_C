
/*
 * 
	Write a function:
	int ceil_div(int a, int b);
	Assume that a >= 0 and b > 0. The function must return the smallest integer that is greater
	than or equal to the mathematical value of a / b.
	Examples:
	ceil_div(13, 5) returns 3
	ceil_div(15, 5) returns 3
	ceil_div(0, 5) returns 0
	Write a complete program that defines the function and calls it from main for the three
	examples above
 * 
 */

#include <stdio.h>

int main(){
	int a = 15, b = 5;
	
	printf("%d\n", a / b + 1 * a % b);
}
