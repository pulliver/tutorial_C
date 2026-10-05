
#include <stdio.h>

int main(){
	int celsius;
	float fahrenheit, kelvin;
	
	printf("Celsius\tFahrenheit\tKelvin\n");
	
	for (celsius = 0; celsius <=100; celsius += 10){
		fahrenheit = (celsius * 9 / 5) + 32;
		kelvin = celsius + 273.15;
		
		printf("%d\t%.1f\t%.1f\n", celsius, fahrenheit, kelvin);
	}
}
