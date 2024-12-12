#include <stdio.h>

int main() {
  char zdanie[50];

  printf("\nPodaj zdanie do normalizacji: ");
  fgets(zdanie, 50, stdin);
  
  int i =0;
  int spacje = 0;
  while(zdanie[i] != '\0') {
    if (zdanie[i] == ' ') {
      spacje++;
    } else {
      spacje = 0;
    }
    
    if (spacje > 1) {
      zdanie[i] = zdanie[i+1]
      i--;
    }
