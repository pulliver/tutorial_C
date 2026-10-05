/*
 * exercise_04.c
 * 
 * 
 */

#include <stdlib.h>
#include <stdio.h>

int *copy_array(int *a, int n){
	int *copy;
	
	copy = malloc(n * sizeof(int));
	if (copy == NULL){return NULL;}
	
	for (int i = 0; i < n; i++){
		copy[n-i-1] = a[i];
	}
	
	return copy;
}

int main(int argc, char **argv)
{
	int orig[] = {3, 7, 1};
	int *copy;
	int lenght;
	
	lenght = sizeof(orig) / sizeof(orig[0]);	
	copy = copy_array(orig, lenght);
	
	printf("dimensione di orig: %d\n",lenght );
	printf("Il vettore ORIGINALE: ");
	for(int i = 0; i < lenght; i++){
		printf("%d, ", orig[i]);
	}
	printf("\n\n");
	
	if (copy == NULL){
		printf("la copia è NULL\n");
	} else{
		printf("la copia NON e' NULL\n");
	}

	printf("Il vettore copia: ");
	for(int i = 0; i < lenght; i++){
		printf("%d, ", copy[i]);
	}
	printf("\n\n");
	free(copy);

	return 0;
}

