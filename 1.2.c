#include <stdio.h>

int main(){
	int low = 0;
	int step = 20;
	int high = 300;

	printf("%s\t%s\n", "Celsius", "Fahrenheit");

	for(int i = low; i <= high; i += step){
		printf("%7d %10d\n", i, 5*(i-32)/9);
	}
}
