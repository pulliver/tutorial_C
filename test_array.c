#include <stdio.h>

void reverse_array(int a[], int n){
	a[0] = 9999;
}

void change_int(int param01){
	param01 = 8888;
}
	
int main(){
	int a[] = {11, 22, 33};
	int length, numero;
	
	length = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < length; i++){
		printf("L'elemento a[%d] e' uguale a: %d\n", i, a[i]);
	}
	reverse_array(a, length);
	for (int i = 0; i < length; i++){
		printf("L'elemento a[%d] e' uguale a: %d\n", i, a[i]);
	}
	
	numero = 5555;
	printf("Numero prima della funizone: %d\n", numero);
	change_int(numero);
	printf("Numero  dopo della funizone: %d\n", numero);
	
}
