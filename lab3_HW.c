#include <locale.h>
#include <stdio.h>
#define Y 2025

int main() {
	setlocale(LC_ALL, "");
	int year, month, day;
	printf("������� ��� ��������");
	scanf("%d", &year);
	printf("������� ����� ��������");
	scanf("%d", &month);
	printf("������� ���� ��������");
	scanf("%d", &day);
	printf("���� ������ ��������: %d.%d.%d\n", day, month, year);
	puts("������ ��� �������...");
	printf("��� ������� %d ���!", Y - year);
}