#include <stdio.h>

int binary_search(const int a[], int left, int right, int target){
/*
	caso base		
	operazione		l'indice middle
	ricorsività		metà target
 */
	int middle;
	if (left > right){return -1;}
	middle = left + (right -left) / 2;
	if (a[middle] == target) {return middle;}
	if (a[middle] < target) {
		binary_search(a, middle + 1, right, target); 
	} else {
		binary_search(a, left, middle - 1, target);
	}
	return -1;
}

int main(){
	int a[] = {2, 5, 8, 12, 17, 21, 30, 35, 45, 47, 50, 300}, target = 300, length;
	length = sizeof(a) / sizeof(a[0]);
	printf("L'elemento %d si trova nella posizione: %d\n\n", target, binary_search(a, 0, length-1, target));
}
