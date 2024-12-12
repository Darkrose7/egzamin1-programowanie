#include <stdio.h>

int main() {
    char zdanie[50];

    printf("Podaj zdanie: ");
    fgets(zdanie, 50, stdin);

    int i = 0;

    while(zdanie[i] != '\0') {
        if(zdanie[i] != ' ') {
            printf("%c", zdanie[i]);
        } else {
            printf("\n");
        }
        i++;
    }

    return 0;
}