
#include <stdio.h>
#include <limits.h>

int addition_is_safe(int a, int b){
//	return (a <= INT_MAX - b);
//	return (a >= INT_MIN - b);
	return b > 0 ? (a <= INT_MAX - b) : (a >= INT_MIN - b);
}

int main(int argc, char **argv)
{
	int a, b;
	printf("Smallest int: %d\n", INT_MIN);
	printf("Largest int: %d\n", INT_MAX);
	
	a = 100, b = 50; 
	printf("Risultato atteso: 1 - effettivo: %d di questa somma %d + %d  \n", addition_is_safe(a,b), a ,b);
	a = INT_MAX, b = 1; 
	printf("Risultato atteso: 0 - effettivo: %d di questa somma %d + %d  \n", addition_is_safe(a,b), a ,b);
	a = -100, b = -50; 
	printf("Risultato atteso: 1 - effettivo: %d di questa somma %d + %d  \n", addition_is_safe(a,b), a ,b);
	a = INT_MIN, b = -1; 
	printf("Risultato atteso: 0 - effettivo: %d di questa somma %d + %d  \n", addition_is_safe(a,b), a ,b);
	
	return 0;
}

