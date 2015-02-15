#include <stdio.h>
#include <stdbool.h>

unsigned long largestFactor(unsigned long input);
bool isPrime(unsigned long candidate);
unsigned long nextPrime(unsigned long currentPrime);

int main() {
	unsigned long number = 600851475143;
	printf("The largest factor of %lu is %lu.\n", number, largestFactor(number));
	return 0;
}

unsigned long largestFactor(unsigned long input) {
	unsigned long largestFactor = 2;
	unsigned long product = 1;
	unsigned long factorized = input;
	while (factorized % 2 == 0) {
		product = product * 2;
		factorized = factorized / 2;
	}
	if (product < input) {
		// I set largestFactor to 3 because I've optimized nextPrime to increment by two because 2 is the only even prime.
		largestFactor = 3;
		while (product < input) {
			while (factorized % largestFactor == 0) {
				product = product * largestFactor;
				factorized = factorized / largestFactor;
			}
			if (product == input) { 
				break; 
			} else { 
				largestFactor = nextPrime(largestFactor); 
			}
		}
	}
	return largestFactor;
}

unsigned long nextPrime(unsigned long currentPrime) {
	currentPrime = currentPrime + 2;
	while (!isPrime(currentPrime)) {
		currentPrime = currentPrime + 2;
	}
	return currentPrime;
}

bool isPrime(unsigned long candidate) {
	for (unsigned long i = 2; i * i <= candidate; i++) {
		if (candidate % i == 0) {
			return false;
		}
	}
	return true;
}
