/*
 * exercise_05.c
 * 
 */

#include <stdlib.h>
#include <stdio.h>

int *copy_array(int *a, int n);

int *copy_array(int *a, int n){
	int *copy;
	
	if (n<=0) { return NULL;}
	copy = malloc(n * sizeof(int));
	if (copy == NULL) { return NULL;}
	for (int i=0; i<n; i++){
		copy[i] = *a;
		a++; 
	}
	return (copy);

/* alternativa con algebra dei puntatori in evidenza
	for (int i=0; i<n; i++){
		*copy = *a;
		a++;
	}
	return (copy - n);
*/

}

int main(void) {
    int original[] = {4, 7, 1};
    int *copy;

    copy = copy_array(original, 3);
    if (copy == NULL) {
        printf("copy_array returned NULL\n");
        return 0;
    }

    printf("Original first element: %d (expected 4)\n", original[0]);
    printf("Copy first element: %d (expected 4)\n", copy[0]);

    free(copy);
    return 0;
}

