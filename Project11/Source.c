#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "RUS");
	float x;
	float y;
	char c;

	printf("������� �������������� ���������: "); 
	scanf("%f%c%f", &x, &c, &y);

	switch (c) {
	case '+':
		printf("�����:%f\n", x + y);
		break;
	case '-':
		printf("�����:%f\n", x - y);
		break;
	case '*':
		printf("�����:%f\n", x * y);
		break;
	case '/':
		printf("�����:%f\n", x / y);
		break;
	case '^':
		printf("�����:%f\n", pow(x, y));
		break;
	default:
		printf("����������� ��� ��������\n");
	}
	return 0;
}