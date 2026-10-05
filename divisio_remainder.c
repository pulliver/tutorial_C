#include <stdio.h>

int main(){
	int total_seconds = 7384;
	int hours = total_seconds / 3600;
	int minutes = (total_seconds % 3600) / 60;
	int seconds = total_seconds % 60;

	printf("%d\n%d\n%d\n%d\n", total_seconds, hours, minutes, seconds );
}
