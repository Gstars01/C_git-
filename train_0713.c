#include <stdio.h>
#include "cursor.h"

int main()
{
	for (int i = 1; i <= 75; i++) {
		gotoxy(i, 10);
		if (i % 2 == 0) {
			puts("....oooo");
		}
		else {
			puts("****OOOO");
		}
		delay(200);
	}
}
