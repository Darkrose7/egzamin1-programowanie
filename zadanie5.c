#include <stdio.h>

int count_words(char* z) {
    int counter = 1;

    int i = 0;
    while(z[i] != '\0') {
        if (z[i] != ' ' && (z[i+1] == ' ' || z[i+1] == '    ')) {
            i++;
            counter++;
        } else {
            i++;
            continue;
        }
    }

    return counter;
}

int main() {

    char zdanie[50];

    printf("Podaj zdanie: ");
    fgets(zdanie, 50, stdin);

    printf("%d\n", count_words(zdanie));

    return 0;
}