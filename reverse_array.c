#include <stdio.h>

void reverse_array(int a[], int n){
/*	loop x n
		temp = a[2]
		a[2] = a[length-2]
		a[length-2] = temp 
*/
	int temp;
	for (int i = 0; i < n/2; i++){
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
}

int main(){
	int a[] = {10};
	int length;
	
	length = sizeof(a) / sizeof(a[0]);
	printf("Lunghezza vettore: %d\n", length);
	for (int i = 0; i < length; i++){
		printf("L'elemento a[%d] e' uguale a: %d\n", i, a[i]);
	}
	reverse_array(a, length);
	printf("Dopo chiamata a funzione\n");
	for (int i = 0; i < length; i++){
		printf("L'elemento a[%d] e' uguale a: %d\n", i, a[i]);
	}
	
}
