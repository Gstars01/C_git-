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
		printf("�����Դϴ�\n");
	}
	else {
		printf("�����Դϴ�\n");
	}
	if (a > b) {
		printf("%d - %d = ", a, b);
		scanf("%d", &ab);
		if (a - b == ab) {
			printf("�����Դϴ�\n");
		}
		else {
			printf("�����Դϴ�\n");
		}
	}
	else if(b>a){
		printf("%d - %d = ", b,a);
		scanf("%d", &ab);
		if (b - a == ab) {
			printf("�����Դϴ�\n");
		}
		else {
			printf("�����Դϴ�\n");
		}
	}
	else {
		printf("%d - %d = ", b, a);
		scanf("%d", &ab);
		if (b - a == ab) {
			printf("�����Դϴ�\n");
		}
		else {
			printf("�����Դϴ�\n");
		}
		
	}
	printf("%d * %d = ", a, b);
	scanf("%d", &ab);
	if (a * b == ab) {
		printf("�����Դϴ�\n");
	}
	else {
		printf("�����Դϴ�\n");
	}
}