#include <stdio.h>

int filterMultiples(int candidate);

int main () {
	int sum = 0;
	for (int i = 1; i < 1000; i++) {
		sum += filterMultiples(i);
	}
	printf("Sum is %d.\n", sum);
	return 0;
}

int filterMultiples(int candidate) {
	if (candidate % 3 == 0 || candidate % 5 == 0) {
		return candidate;
	}
	return 0;
}
