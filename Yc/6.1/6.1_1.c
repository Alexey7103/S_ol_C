
#include<stdio.h>

int main() {
	int A;
	scanf("%d" ,&A);
	while ( A < 10 ) {
		printf("%d " ,A);
		A++;
	}
	if ( A > 10 ) {
		printf("%s " ,"Больше");
	}
	else {
		printf("%s" ,"Не верно");
	}
	return 0;
}
