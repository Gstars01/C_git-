#include<stdio.h>
float bank(float m, float r, int y){
	float money = m + m*r;
	for (int i = 1; i < y; i++) {
		money = money + money * r;
	}
	return money;
}
int main()
{
	float m;
	float r;
	int y;
	printf("예금할 금액 입력 :");
	scanf("%f", &m);
	printf("이율 입력(소수점 단위까지) : ");
	scanf("%f", &r);
	printf("예금할기간 입력(년단위) :");
	scanf("%d", &y);
	printf("%f원",bank(m, r, y));
}