#include<stdio.h>
#include<stdlib.h>
int main() {
	int a = rand() % 9 + 1;
	int b = rand() % 9 + 1;
	int c = rand() % 9 + 1;
	int c_a = 0;
	int	c_b = 0;
	int	c_c = 0;
	int ball = 0;
	int strike = 0;
	printf("세수 입력  :");
	scanf("%d %d %d", &c_a, &c_b,& c_c);
	if (a == c_a) {
		strike += 1;
	}
	else if(a == c_b) {
		ball += 1;
	}
	else if (a == c_c) {
		ball += 1;
	}
	// a
	if (b == c_a) {
		ball += 1;
	}
	else if (b == c_b) {
		 strike+= 1;
	}
	else if (b == c_c) {
		ball += 1;
	}
	//b
	if (c == c_a) {
		strike += 1;
	}
	else if (c == c_b) {
		ball += 1;
	}
	else if (c == c_c) {
		strike += 1;
	}
	//c
	printf("%d 스트라이크 %d볼입니다.", strike, ball);
}