#include <stdio.h>

int longest_increasing_run(int a[], int n){
	int start_lr = 0, end_lr = 0;
	int longest_range = 1;
	
	for (int i = 0; i < n-1; i++){
		printf("a,i: %d  a,i+1: %d\t ",a[i], a[i+1]);
		printf("start: %d end: %d  longest_range: %d\n---\n", start_lr, end_lr, longest_range);
//		(a[i] < a[i+1]) ? (end_lr = i+1) : (start_lr = end_lr = i+1);
		if (a[i] < a[i+1]) {
			(end_lr = i+1);
			longest_range++;
		} else {
			(longest_range <= (end_lr - start_lr +1 )) ? longest_range = 0 : 0;
			(start_lr = end_lr = i+1);
		}
	}
	return longest_range;  
}

int main(){
	int a[] = {2, 4, 7, 3, 5, 6, 8, 1};
//	int a[] = {5, 4, 3, 2};
//	int a[] = {1, 2, 2, 3};
	int length;
	
	length = sizeof(a) / sizeof(a[0]);
	printf("Lunghezza vettore: %d\n", length);
	for (int i = 0; i < length; i++){
		printf("L'elemento a[%d] e' uguale a: %d\n", i, a[i]);
	}

	printf("the longest increasing run is: %d", longest_increasing_run(a, length));
}
