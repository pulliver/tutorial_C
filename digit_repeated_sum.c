#include <stdio.h>

int digital_root(int n){

/*
	caso base			n < 10 return n
	operazione			n % 10 e somma
	chiamata ricorsiva	n / 10 
*/
	if (n < 10){
		return n;
	}
	return digital_root(n%10 + n/10);
}

int dr_courtain(int n){
	return (1 + (n-1)%9);
}

int main(){
	int numero = 583;		// 7
//	int numero = 83;		// 2
//	int numero = 9999;		// 9
//	int numero = 5;			// 5
	
	printf("La somma delle cifre di %d è: %d", numero, digital_root(numero));
//	printf("La somma delle cifre di %d è: %d", numero, dr_courtain(numero));
}
