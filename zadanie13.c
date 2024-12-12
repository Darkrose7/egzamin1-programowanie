#include <stdio.h>
#include <stdlib.h>

int uklad(double** a, double* b) {
    double W, Wx, Wy;

    W = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    Wx = b[0] * a[1][1] - a[0][1] * b[1];
    Wy = a[0][0] * b[1] - b[0] * a[1][0];

    if (W != 0) {
        b[0] = Wx / W;
        b[1] = Wy / W;
        return 2;
    }
    else {
        if (Wx != 0 || Wy !=0) return 0;
        else return 1;
    }
}

int main() {

    int i, j;

    // Malloc zamiast operatora new, w orginalnej wersji:
    // double** a = new double*[2];
    // a[0] = new double[2];
    // a[1] = new double[2];

    double** a = (double**)malloc(2 *sizeof(double*));
    a[0] = (double*)malloc(2 * sizeof(double));
    a[1] = (double*)malloc(2 * sizeof(double));

    double* b = (double*)malloc(2 * sizeof(double));

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Podaj a[%d][%d]: ", i, j);
            scanf("%lf", a[i] + j);
        }
        printf("Podaj b[%d]: ", i+1);
        scanf("%lf", b + i);
    }

    int t = uklad(a, b);
    if(t == 2) {
        printf("x[0]=%g\n", b[0]);
        printf("x[1]=%g\n", b[1]);
    }
    else {
        if(t == 1) printf("Uklad rownan jest nieoznaczony\n");
        else printf("Uklad rownan jest sprzeczny\n");
    }

    getchar();

    return 0;
}