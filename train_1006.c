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
			printf("정답입니다 지금까지 %d개의 문제중 %d개를 맞췄습니다.\n",count,ans);
			count += 1;
			ans += 1;
		}
		else if(ab == 0) {
			printf("프로그램 종료");
			break;
		}
		else {
			printf("오답입니다 지금까지 %d개의 문제중 %d개를 맞췄습니다.\n", count, ans);
			count += 1;
		}
	}
}