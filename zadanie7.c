#include <stdio.h>

int main() {
    char zdanie[50];

    printf("Podaj zdanie: ");
    fgets(zdanie, 50, stdin);

    int i = 0;
    int isSpaceDeleted = 0;

    while(zdanie[i] != '\0') {
        if ((zdanie[i] == ' ' || zdanie[i] == '  ') && !isSpaceDeleted) {
            i++;
            continue;
        }
        else {
            isSpaceDeleted = 1;
            printf("%c", zdanie[i]);
            i++;
        }
    }

    return 0;
}