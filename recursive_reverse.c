#include <stdio.h>

void reverse_recursive(int a[], int start, int end){
	int temp;
	if (start >= end) {return ;}
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;
//	printf("start indice/valore %d/%d -  end indice/valore %d/%d\n",start, a[start], end, a[end]);
	reverse_recursive(a, ++start, --end);
}

int main(){
	int a[] = {1, 11, 22, 33, 44, 55};
	int length;
	
	length = sizeof(a) / sizeof(a[0]);
	printf("Lunghezza vettore: %d\n", length);
	for (int i = 0; i < length; i++){
		printf("L'elemento a[%d] e' uguale a: %d\n", i, a[i]);
	}
	
	reverse_recursive(a, 0, length-1);
	
	printf("Lunghezza vettore: %d\n", length);
	for (int i = 0; i < length; i++){
		printf("L'elemento a[%d] e' uguale a: %d\n", i, a[i]);
	}
	
	
}
