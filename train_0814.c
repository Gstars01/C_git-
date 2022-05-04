#include<stdio.h>
int GetSumStep(int from,int to,int step) {
	int sum = 0;
	for (int i = from; i <= to; i += step) {
		sum = sum + i;
	}
	return sum;
}
int main() {
	int from = 0;
	int to = 0;
	int step= 0;
	printf("from 입력 : ");
	scanf("%d", &from);
	printf("to 입력 : ");
	scanf("%d", &to);
	printf("step 입력 : ");
	scanf("%d", &step);
	printf("%d 에서 %d 까지 더한값 = %d",from,to,GetSumStep(from, to, step));
}