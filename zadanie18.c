#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main() {

	setlocale(LC_ALL, "PL-pl");

	int n = 0;

	printf("Podaj rozmiar tablicy: ");
	scanf("%d", &n);

	double* a = new double[n];

	for (int i = 0; i < n; i++) {
		printf("\nPodaj element a[%d]: ", i);
		scanf("%lf", (a + i));
	}

	double m = a[0];
	int index = 0;
	for (int i = 0; i < n; i++) {
		if (m < a[i]) { index = i; m = a[i]; }
		else continue;
	}

	printf("Największa liczba: %g (index: %d)", m, index);

	_getch();
    return 0;
}