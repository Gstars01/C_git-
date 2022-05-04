#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ab = 0;
	int a = rand() % 10 + 1;
	int b = rand() % 10 + 1;
	printf("%d + %d = ", a, b);
	scanf("%d", &ab);
	if (a + b == ab) {
		printf("정답입니다\n");
	}
	else {
		printf("오답입니다\n");
	}
	if (a > b) {
		printf("%d - %d = ", a, b);
		scanf("%d", &ab);
		if (a - b == ab) {
			printf("정답입니다\n");
		}
		else {
			printf("오답입니다\n");
		}
	}
	else if(b>a){
		printf("%d - %d = ", b,a);
		scanf("%d", &ab);
		if (b - a == ab) {
			printf("정답입니다\n");
		}
		else {
			printf("오답입니다\n");
		}
	}
	else {
		printf("%d - %d = ", b, a);
		scanf("%d", &ab);
		if (b - a == ab) {
			printf("정답입니다\n");
		}
		else {
			printf("오답입니다\n");
		}
		
	}
	printf("%d * %d = ", a, b);
	scanf("%d", &ab);
	if (a * b == ab) {
		printf("정답입니다\n");
	}
	else {
		printf("오답입니다\n");
	}
}