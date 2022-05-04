#include<stdio.h>
#include"cursor.h"
int main()
{
	for (int i = 2,z=6; i <= 5; i++,z++) {
		for (int j = 1; j <= 9; j++) {
			gotoxy(i * 15 - 25, j + 2);
			printf("%d * %d = %d", i, j, i * j);
			gotoxy((z - 4) * 15 - 25, j + 12);
			printf("%d * %d = %d", z, j, z * j);
		}
	}
	return 0;
}