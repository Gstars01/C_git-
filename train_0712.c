#include <stdio.h>

int main()
{
	int count = 1;
	
	for(int i = 1; i < 70; i++) {
		printf("-\n");

		for (int j = 0; j < count; j++) {
			printf("|\n");
		}
		count = count + 3;
	}
	return 0;
}

