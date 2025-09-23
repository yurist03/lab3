#include <locale.h>
#include <stdio.h>
#define Y 2025

int main() {
	setlocale(LC_ALL, "");
	int year, month, day;
	printf("¬ведите год рождени€");
	scanf("%d", &year);
	printf("¬ведите мес€ц рождени€");
	scanf("%d", &month);
	printf("¬ведите день рождение");
	scanf("%d", &day);
	printf("ƒата вашего рождени€: %d.%d.%d\n", day, month, year);
	puts("—читаю ваш возраст...");
	printf("¬аш возраст %d лет!", Y - year);
}