
#include<stdio.h>

int main() {
	for (int A = 10; A <= 50; A += 5) {
		if (A == 20) {
			continue;
		}
		if (A == 40) {
			break;
		}
		printf("%d " ,A);	
	}
	return 0;
}


