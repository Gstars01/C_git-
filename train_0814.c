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
	printf("from �Է� : ");
	scanf("%d", &from);
	printf("to �Է� : ");
	scanf("%d", &to);
	printf("step �Է� : ");
	scanf("%d", &step);
	printf("%d ���� %d ���� ���Ѱ� = %d",from,to,GetSumStep(from, to, step));
}