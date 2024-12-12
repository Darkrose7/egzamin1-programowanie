#include <stdio.h>

int main()
{
  char zdanie[50];

  printf("Wprowadz zdanie: ");
  fgets(zdanie, 50, stdin);

  printf("%s", zdanie);

  return 0;
}
