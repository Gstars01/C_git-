#include<stdio.h>
#define iseven(i) (((i)%2==0)?("ture"):("false"))
int main() {
	int i = 0;
	printf("¦������ Ȧ������ �Ǻ��� �� �Է� : ");
	scanf("%d", &i);
	printf("%s", iseven(i));
}