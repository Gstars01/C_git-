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
	printf("������ �ݾ� �Է� :");
	scanf("%f", &m);
	printf("���� �Է�(�Ҽ��� ��������) : ");
	scanf("%f", &r);
	printf("�����ұⰣ �Է�(�����) :");
	scanf("%d", &y);
	printf("%f��",bank(m, r, y));
}