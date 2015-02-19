#import <stdio.h>
#import <math.h>

int sumSquareDifference(int amount);

int main() {
	printf("%d\n", sumSquareDifference(100));
	return 0;
}

int sumSquareDifference(int amount) {
	int sum, square;
	for (int i = 0; i < amount; i++) {
		square += i + 1;
		sum += (int) pow(i + 1, 2);
	}
	square = (int) pow(square, 2);
	return square - sum;
}
