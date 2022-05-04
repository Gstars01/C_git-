#include <stdio.h>

int main()
{
	int c = 65;
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10 - a; b++) {
			printf(" ");
		}
		for (int b = 1; b <= a * 2 - 1; b++) {
			printf("%d", a*2-1);
			printf("%d", b);
			printf("%c",c);
		}
		puts("");
	}
}

