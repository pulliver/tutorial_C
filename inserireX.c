#include <stdio.h>

int chiedi_un_numero (void);
void print_array (int *a, int n);

void print_array (int *a, int n) {
	printf("[");
	for (int i=0; i<n; i++) {printf("%d", a[i]);
		if (i<n-1) {printf(",");}}
		printf("]");
	}

int  chiedi_un_numero (void)
     { int numero;
		 printf("scrivi il numero\n");
		 scanf("%d", &numero);
		 return numero;
		 }

int main(int argc, char **argv)
{
	int x;
	x= chiedi_un_numero();
	
	int v[]= {3,9,11,19,22,56,98};
	int w[8];
	
	int i; 
	for (i=0; i< 7; i++) {
		if (v[i]<x) {
			w[i]=v[i];
		} else {
			w[i] = x;  
			break;}	
	}
 for (int j=i+1; j<8; j++) {
				w[j]=v[j-1];
		}
	print_array (w, 8);
	
	return 0;
}

