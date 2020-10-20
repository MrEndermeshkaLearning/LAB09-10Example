#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	for (int i = 7; i > 1; i--)
	{
		for (int j = i; j > 1; j--) {
			printf("%d", j);
		}
		printf("\n");
	}
}