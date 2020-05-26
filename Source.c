#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int i, j;

	printf("Masukkan Banyak Pengulangan   = "); scanf_s("%i", &j);

	for (i = 1; i <= j; i++)
	{
		printf("%i\n", i);

		if (i == (j - 3))
		{
			break;
		}
	}

	printf("\ni Terakhir (break = banyak - 3)  = %i\n\n", i);

	_getch();
	return 0;
}