#include <stdio.h>

int main(int argc, const char** argv)
{
	int num = 0;
	int notPrime = 0;
	printf("Введите число");
	scanf_s(num);
	for (int i = 2; i * i <= num && notPrime != 1; i++) {
		if (num % i == 0) {
			notPrime = 1;
		}
	}
	if (!notPrime) {
		printf("Число простое");
	}
	else {
		printf("Число составное");
	}
	return 0;
}
