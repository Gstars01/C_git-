#include<stdio.h>
int swap(int *a,int *b){
	int memory = 0;
	memory = *a;
	*a = *b;
	*b = memory;
	return a, b;
}
int main()
{
	int a, b = 0;
	printf("a입력 : ");
	scanf("%d", &a);
	printf("b입력 : ");
	scanf("%d", &b);
	swap(&a, &b);
	
	printf("%d %d",a,b);
}