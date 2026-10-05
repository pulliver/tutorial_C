
#include <stdio.h>

int ceil_div(int a, int b){
	 return a / b  + 1 * !(a % b == 0);
}

int main(){
		int a = 16, b = 5;
		
		printf("%d\n", ceil_div(a, b));
}
