#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "RUS");
	int sum = 0,  count = 0, temp = 0;
	double averange = 0;

	printf("¬водите цифру, чтобы закончить ввод, введите 0\n");
	while (true) {
		printf("=> ");
		scanf_s("%d", &temp);
		if (temp != 0) {
			sum += temp;
			count++;
		}
		else
		{
			break;
		}
	}
	averange = sum / count;
	printf("sum = %d, averange = %lf", sum, averange);
}