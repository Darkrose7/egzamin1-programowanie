#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "PL-pl");

	int n = 0;

	printf("Podaj liczbę do obliczenia silni: ");
	scanf("%d", &n);

	int silnia = 1;
	int i = 1;

	while (i <= n) {
		silnia = silnia * i;
		i++;
	}

	printf("Silnia: %d", silnia);
	_getch();
    return 0;
}