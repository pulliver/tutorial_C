/*
 * exercise4.c
 * 
 *  
 * 
 */
#include <stdio.h>

#include <stdlib.h>

int *copy_array(int *originale[], int n){
	int *copy = malloc(n * sizeof(int));
	if (copy == NULL) {return NULL;}
	return copy;
}

int main(int argc, char **argv)
{
	int a[] = {3,-1, 4, 2};
	int dimensione;
	dimensione = sizeof(a) / sizeof(a[0]);
//	copy_array();
	printf("dimensione: %d", dimensione);
	return 0;
}

