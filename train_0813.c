#include<stdio.h>
int getmax(int a,int b) {
	if (a > b) {
		return a;
	}
	else if (b > a) {
		return b;
	}
}
int main() {
	int a, b = 0;
	printf("a입력 : ");
	scanf("%d", &a);
	printf("b입력 : ");
	scanf("%d", &b);
	printf("두 수중 더 큰수는 %d 입니다", getmax(a,b));
}