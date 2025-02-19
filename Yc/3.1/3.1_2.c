// Усложни

#include<stdio.h>

int main() {
	int A;
	scanf("%d" ,&A);
	printf("итого: %d\n" ,A);
	if (A < 10) {
		printf("Ведено число < 10");
	}
	else if (A > 10) {
		printf("Ведено число > 10");
	}
	else {
		printf("Число == 10");
	}
	return 0;
} 
