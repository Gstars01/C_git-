#include<stdio.h>
int main()
{
	int j = 0;
	int sum = 0;
	int mul = 0; 
	int total = 0;
	int i = 1;
	for (;;) {
		sum += i;// sum= 1
		j += 2;	// j = j+2 
		mul = i * j; // mul =1 
		printf("%d\n", mul);
		total += mul; // 0 = 0+2
		i += 2;
		if (j == 20){
			printf("%d °¡ ´ä",total);
			break;
		}
	}
}