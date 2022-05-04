#include<stdio.h>
int main()
{
	int sum= 0;
	int i = 0;
	int count = 0;
	while (i <= 200) {
		if (i % 2 != 0) {
			sum = sum + i;
			count++;
			printf("%d %d\n", sum,count);
		}
		i++;
	}
	return 0;
}