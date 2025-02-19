
#include<stdio.h>

int main() {
	int A;
	int B;
	scanf("%d\n%d" ,&A ,&B);
	int D = A + B;
	printf("Итого: %d " ,D);
	if (D == 20) {
		printf("Равно");
	}
	else if (D > 20) {
		printf("Больше");
	}
	else {
		printf("Меньше");
	}
	return 0;
} 


