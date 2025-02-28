// Перепеши код используч switch

#include<stdio.h>

int main() {
	int A = 10;
	switch (A) {
		case 5:
			printf("A меньше");
			break;

		case 15:
			printf("A больше");
	        	break;

		case 10:
			printf("A равно");
			break;

		default:
			printf("Не понятно");
		}	
		return 0;
	}
