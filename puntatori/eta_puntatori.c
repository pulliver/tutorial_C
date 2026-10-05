#include <stdio.h>
#include <stdlib.h>
void print_array(int *a, int n);

void print_array(int *a, int n) {
    int i;

    for (i = 0; i < n; i = i + 1) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
	}
}

int main () {
	int persone;
	printf ("quante persone siete?\n");
	scanf ("%d", &persone);

	int *age;
	age = malloc(persone*sizeof(int));
	for (int i = 0; i < persone; i++) {
	  printf ("quanti anni hanno?\n");
	  scanf ("%d", &(*(age+i)));
	  }
	
printf ("le eta' delle persone sono \n");
print_array (age, persone);

return 0;
}
