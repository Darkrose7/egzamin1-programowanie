#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "PL-pl");

    int n = 0;
    int rangeFrom = 0;
    int rangeTo = 0;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);

    printf("Podaj początkowy indeks:  ");
    scanf("%d", &rangeFrom);

    if (rangeFrom < 0) {
        printf("Niepoprawny zakres początkowy!!!!\n");
        _getch();
        exit(1);
    }

    printf("Podaj końcowy indeks indeks:  ");
    scanf("%d", &rangeTo);

    if (rangeTo > n) {
        printf("Niepoprawny zakres końcowy!!!!\n");
        _getch();
        exit(1);
    }

    double* a = new double[n];

    for (int i = 0; i < n; i++) {
        printf("\nPodaj element a[%d]: ", i);
        scanf("%lf", (a + i));
    }

    double m = a[0];
    for (int i = rangeFrom; i <= rangeTo; i++) {
        if (m < a[i]) m = a[i];
        else continue;
    }

    printf("Największa liczba: %g", m);

    _getch();

    return 0;
}