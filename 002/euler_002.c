#include <stdio.h>

int fib(int term);

int main() {
	int sum = 0;
	for (int i = 1; fib(i) < 4000001; i++) {
		if (fib(i) % 2 == 0) {
			sum += fib(i);
		}
	}
	printf("Sum is %d.\n", sum);
	return 0;
}

int fib(int term) {
	if (term == 1 || term == 2) {
		return term;
	}
	return fib(term - 1) + fib(term - 2);
}
