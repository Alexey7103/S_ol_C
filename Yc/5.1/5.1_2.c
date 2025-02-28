// Простой вариант применения &&

#include<stdio.h>

int main() {
	int A = 50;
	if ( A > 40 && A < 60) {
		printf("%s" ,"Между 40 и 60");
	}
	else {
		printf("%s" ,"НЕ ВЕРНО");
	}
	return 0;
}


