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
	printf("a�Է� : ");
	scanf("%d", &a);
	printf("b�Է� : ");
	scanf("%d", &b);
	printf("�� ���� �� ū���� %d �Դϴ�", getmax(a,b));
}