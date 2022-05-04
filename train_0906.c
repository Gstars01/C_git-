#include<stdio.h>
#include<math.h>
#define tom2(p) (p)*3.3
int main() {
	int p = 0;
	printf("제곱미터로 환산 할 평수 입력 : ");
	scanf("%d", & p);
	printf("%.0f 제곱미터", floor(tom2(p)));
	
}
