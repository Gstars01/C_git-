#include<stdio.h>
#define iseven(i) (((i)%2==0)?("ture"):("false"))
int main() {
	int i = 0;
	printf("짝수인지 홀수인지 판별할 수 입력 : ");
	scanf("%d", &i);
	printf("%s", iseven(i));
}