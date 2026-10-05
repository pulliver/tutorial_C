
#include <stdio.h>

int square(int num ){
	return num * num;
}

int main(){
	int number = 10;
	printf("Il quadrato di %d e: %d", number, square(number));
}
