#import <stdio.h>

int isPalindrome(int candidate);
int largestPalindrome();

int main() {
	printf("The largest palindromic number made from the product of two 3-digit numbers is %d\n", largestPalindrome());
	return 0;
}

int largestPalindrome() {
	int largestPalindrome;
	int x = 999;
	int y = 1;
	while (x) {
		while (y < 1000) {
			int candidate = isPalindrome(x * y);
			if (candidate && x * y > largestPalindrome) {
				largestPalindrome = x * y;
			}
			y++;
		}
		y = 1;
		x--;
	}
	return largestPalindrome;
}

int isPalindrome(int candidate) {
	int digits[6]; // Can become at most six digits since 999 * 999 = 998001
	int x = 0, y = 0;
	while (candidate) {
		digits[x++] = candidate % 10;
		candidate /= 10;
	}
	x--;
	while (x > y) {
		if (digits[x] != digits[y]) {
			return 0;
		}
		x--;
		y++;
	}
	return 1;
}
