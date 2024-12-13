#include <stdio.h>
#include <locale.h>

int main() {
    	setlocale(LC_ALL, "PL-pl");

	typedef struct {
		char name[20];
		char proffesion[30];
	}person;

	int n = 0;

	printf("Podaj ilość osób do wprowadzenia: ");
	scanf("%d", &n);

	getchar();

	person* people = new person[n];

	for (int i = 0; i < n; i++) {
		printf("\nPodaj imię i nazwisko osoby %d", i);
		fgets(people[i].name, 20, stdin);

		printf("\nPodaj zawód tej osoby: ");
		fgets(people[i].proffesion, 30, stdin);
	}

	char toFind[20];

	printf("Podaj osobę, do znalezienia: ");
	fgets(toFind, 20, stdin);

	for (int i = 0; i < n; i++) {
		if (strcmp(people[i].name, toFind) == 0) {
			printf("Znaleziono na pozycji %d\n", i);
			_getch();
			exit(0);
		}
		else {
			continue;
		}
	}

	printf("Nie znaleziono podanej osoby!");
	_getch();

    return 0;
}