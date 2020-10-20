#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int integerNumber = 0;
    while (true) {
        printf("¬ведите число больше или равное 100\n");
        scanf_s("%d", &integerNumber);
        if (integerNumber >= 100) {
            break;
        }
    }
    int tempX, tempY, tempZ;
    tempX = integerNumber / 100;
    tempY = integerNumber / 10-tempX*10;
    tempZ = integerNumber - (tempX * 100 + tempY * 10);
    integerNumber = tempZ * 100 + tempY * 10 + tempX;
    printf("Result = %d", integerNumber);
}