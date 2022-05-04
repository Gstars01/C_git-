#pragma warning(disable:4996)
#include<Stdio.h>
#include<conio.h>
#include"cursor.h"

int main()
{
	int x = 40, y = 10;
	int ch;
	clrscr();

	for (;;)
	{
		gotoxy(x, y);
		putch('@');
		ch = getch();
		switch (ch) {
		case 0x41:
		case 0x61:
			x--;
			break;
		case 0x44:
		case 0x64:
			x++;
			break;
		case 0x57:
		case 0x77:
			y--;
			break;
		case 0x53:
		case 0x73:
			y++;
			break;
		case 'q':
		case 'Q':
			x--;
			y--;
			break;
		case 'e':
		case 'E':
			x++;
			y--;
			break;
		case 'z':
		case 'Z':
			x--;
			y++;
			break;
		case 'c':
		case 'C':
			x++;
			y++;
			break;
		case ' ':
			clrscr();
			break;
		case 'x':
		case 'X':
			exit(0);
		}
	}
}