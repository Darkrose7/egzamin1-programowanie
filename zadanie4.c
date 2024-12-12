#include <stdio.h>

int main() {
  char zdanie[50];

  printf("Podaj zdanie: ");
  fgets(zdanie, 50, stdin);

  int licznik = 0;
  int i = 0;
  while (zdanie[i] != '\0') {
    if (zdanie[i] == 'a' && zdanie[i+1] == 'b') { 
      licznik++;
      i++;
    }
    else {
      i++;
      continue;
    }
  }

  printf("Ilosc: %d\n", licznik);
}
