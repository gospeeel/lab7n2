#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "RUS");
	float x;
	float y;
	char c;

	printf("Введите арифметическое выражение: "); 
	scanf("%f%c%f", &x, &c, &y);

	switch (c) {
	case '+':
		printf("Ответ:%f\n", x + y);
		break;
	case '-':
		printf("Ответ:%f\n", x - y);
		break;
	case '*':
		printf("Ответ:%f\n", x * y);
		break;
	case '/':
		printf("Ответ:%f\n", x / y);
		break;
	case '^':
		printf("Ответ:%f\n", pow(x, y));
		break;
	default:
		printf("Неизвестный вид операции\n");
	}
	return 0;
}