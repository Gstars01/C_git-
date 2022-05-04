#include<stdio.h>
#include"cursor.h"
int main()
{
	int x = 1, y = 1;
	for (x = 1; x <= 80; x =x+ 3) {
		gotoxy(x, y);
		printf("#");
		y = y + 1;
	}
	return 0;
}