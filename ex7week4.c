#include <stdio.h>
#include <stdlib.h>

struct Peaks {
    int *values;
    int length;
};

int is_peak(int *a, int n, int i);
int count_peaks(int *a, int n);
struct Peaks *extract_peaks(int *a, int n);

int is_peak(int *a, int n, int i) {
	if (i>0 && i<n) {
	if (a[i]>a[i-1] && a[i]>a[i+1]) {
		return 1;
	}
	else {
    return 0;
}
}
else {
	return 0;
}
}

int count_peaks(int *a, int n) {
	int count = 0;
	for (int i=0; i<n; i++) {
		if (is_peak >1) {
			count++;
		}
	}
    return count;
}

struct Peaks  *creaspazio_struct(int n) {
    struct Peaks p;

    p->values = malloc(n * sizeof(int));
    p->length = n;
  
    return p;
    }

struct Peaks *extract_peaks(int *a, int n) {
	
        if (n <=0) {
		return NULL;
	}
	else {
          struct Peaks ESTRATTO;
    ESTRATTO = creaspazio_struct(count_peaks(a,n));
           for(int i=0; i<n; i++) { if (is_peaks(*a, n, i) = 1) {ESTRATTO->values[i]=a[i];}} 
    }
    return NULL;
}

void print_int_array(int *a, int n) {
    int i;

    printf("[");
    for (i = 0; i < n; i = i + 1) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]");
}

int main(void) {
    int a[] = {1, 5, 2, 7, 4, 3, 6, 1};
    struct Peaks *result;

    result = extract_peaks(a, 8);
    if (result == NULL) {
        printf("extract_peaks returned NULL\n");
        return 0;
    }

    printf("length = %d (expected 3)\n", result->length);
    printf("values = ");
    print_int_array(result->values, result->length);
    printf(" (expected [5, 7, 6])\n");

    free(result->values);
    free(result);
    return 0;
}