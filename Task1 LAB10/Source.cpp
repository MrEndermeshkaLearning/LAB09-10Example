#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	double tempVariable = 0;
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 10; j++) {
			tempVariable += cos(i + 1) / j;
		}
	}
	printf("Ñóììà = %lf", tempVariable);
}