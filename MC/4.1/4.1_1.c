// Усложин

#include<stdio.h>

int main() {
	int A[] = {10, 20, 30};
	int B = 0;
	for (int R = 0; R < 3; R++)
	{ 
		B += A[R];
	}
	printf("Итого:%d ",B);
	return 0;
}

