#include <stdio.h>

int main() {
  char zdanie[50];
  int licznik = 0;

  printf("Podaj zdanie, zostana w nim zliczone male i duze litery A: ");
  fgets(zdanie, 50, stdin);

  int i = 0;

  while (zdanie[i] != '\0') {
    if (zdanie[i] == 'a' || zdanie[i] == 'A') {
      licznik++;
      i++;
    }
    else {
      i++;
      continue;
    }
  }
  printf("Ilosc liter a i A: %d", licznik);
}
  
