#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ab = 0;
	int count = 0;
	int ans = 0; 
	while (1)
	{
		int a = rand() % 10 + 1;
		int b = rand() % 10 + 1;
		printf("%d + %d = ",a,b);
		scanf("%d", &ab);
		if (a + b == ab) {
			printf("�����Դϴ� ���ݱ��� %d���� ������ %d���� ������ϴ�.\n",count,ans);
			count += 1;
			ans += 1;
		}
		else if(ab == 0) {
			printf("���α׷� ����");
			break;
		}
		else {
			printf("�����Դϴ� ���ݱ��� %d���� ������ %d���� ������ϴ�.\n", count, ans);
			count += 1;
		}
	}
}