// Перепеши с использованием switch

#include<stdio.h>

int main() {
	int A;
	scanf("%d" ,&A);
	if (A > 20) {
		printf("А больше 20");
	}
	else if (A < 20) {
		printf("А меньше 20");
	}
	else {
		printf("А равно 20");
	}
	return 0;
}

