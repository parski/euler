#import <stdio.h>

int smallestMultiple();
int isEvenlyDivisible(int candidate);

int main() {
	printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is %d.\n", smallestMultiple());
	return 0;
}

int smallestMultiple() {
	int candidate = 1;
	while (1) {
		if (isEvenlyDivisible(candidate)) {
			return candidate;
		}
		candidate++;
	}	
}

int isEvenlyDivisible(int candidate) {
	int divisor = 20;
	while (divisor > 0) {
		if (candidate % divisor == 0) {
			divisor--;
		} else {
			return 0;
		}
	}
	return 1;
}
