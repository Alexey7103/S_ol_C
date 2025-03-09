
#include<stdio.h>

int main() {
	int A [2] [3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	for (int B = 0; B < 2; B++) {
		for (int R = 0; R < 3; R++) {
			printf("%d " ,A[B][R]);
		}
		printf("\n");
	}
	return 0;
}


