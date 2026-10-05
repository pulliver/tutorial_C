#include <stdio.h>
#include <stdlib.h>

struct Statistics {
    int minimum;
    int maximum;
    double average;
};

int find_min (int *a, int n);
int find_min (int *a, int n) { 
	int minimum = a[0];
	for (int i = 1; i < n; i++) {
        if (a[i] < minimum) {
            minimum = a[i];
        }
    }
    return minimum;
}
	
int find_max (int *a, int n);
int find_max (int *a, int n) { 
	int maximum = a[0];
	for (int j = 1; j < n; j++) {
        if (a[j] > maximum) {
            maximum = a[j];
        }
    }
    return maximum;
}

int sum (int *a, int n);
int sum (int *a, int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum = sum + a[i];
    }
    return sum;
}

double average (int sum, int n);
double average (int sum, int n) {
    double average = (double) sum / n;
    return average;
}

struct Statistics *summarize(int *a, int n);
struct Statistics *summarize(int *a, int n) {
	if (n<=0) {
        return NULL;
    }
    else { 
        struct Statistics *result;
        result=malloc(sizeof(struct Statistics));
        result->minimum = find_min (a, n);
        result->maximum = find_max (a, n);
        result->average = average (sum(a,n), n);

        return result;
    }
	
}

int main(void) {
    int a[] = {4, 7, 1, 8};
    struct Statistics *result;

    result = summarize(a, 4);
    if (result == NULL) {
        printf("summarize returned NULL\n");
        return 0;
    }

    printf("Minimum: %d (expected 1)\n", result->minimum);
    printf("Maximum: %d (expected 8)\n", result->maximum);
    printf("Average: %.1f (expected 5.0)\n", result->average);

    free(result);
    return 0;
}