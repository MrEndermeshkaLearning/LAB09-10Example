#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	int n, x;
	printf("¬ведите n:");
	scanf_s("%d", &n);
	printf("¬ведите x:");
	scanf_s("%d", &x);
	int fact = 1;
	double sum=0;

	for (int i = 0; i < n; i++)
	{
		fact = 1;
		for (int j = i + 1; j > 0; j--) {
			fact *= j;
		}
		sum += pow(x, i) + fact;
	}
	printf("–езультат сложение р€да = %lf", sum);
}