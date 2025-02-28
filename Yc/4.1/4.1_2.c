
#include<stdio.h>

int main() {
	int A;
	scanf("%d" ,&A);
	switch (A) {
		case 30:
			printf("А больше 20");
			break;
		case 10:
			printf("А меньше 20");
			break;
		case 20:
			printf("А равно 20");
			break;
		default:
			printf("Не понятно");
		}
	return 0;
}


