#include <stdio.h>

int longest_increasing_run(int a[], int n){
	int contatore = 1, max_len = 1;
	for (int i = 0; i < n; i++){
		if (a[i] < a[i+1]) {
			contatore++;
		} else {
			if (contatore > max_len) {
				max_len = contatore;
			}
			contatore = 1;
		}
	} 

/*	a[i] < a[i+1] -> contatore++ 
		altrimenti
			contatore = 1
*/	
	return max_len;
}

int main(){
//	int a[] = {1, 9, 10, 33, 44, 55};	//	6
//	int a[] = {2, 4, 7, 3, 5, 6, 8, 1};	//	4
//	int a[] = {5, 4, 3, 2};				//	1
	int a[] = {1, 2, 2, 3};				//	2
	int length;
	
	length = sizeof(a) / sizeof(a[0]);
	printf("Lunghezza vettore: %d\n", length);
	for (int i = 0; i < length; i++){
		printf("L'elemento a[%d] e' uguale a: %d\n", i, a[i]);
	}
	printf("Il sottoinsieme del vettore è composto da: %d", longest_increasing_run(a, length));
}
