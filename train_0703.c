#include<stdio.h>
int main()
{
	int rannum = 28;
	int input_num,count_num = 0;
	for(;;){
		scanf_s("%d", &input_num);
		if (input_num < 28){
			if ((28 - input_num) >= 10){
				printf("�Է��Ͻż��� ���ں��� 10�̻� �������Դϴ�\n");
			}
			else if ((28 - input_num) < 10) {
				printf("�Է��Ͻż��� ���ڿ� 10�̸����� ���̳��� �������Դϴ�\n");
			}
		}
		if (input_num > 28) {
			if ((input_num - 28) >= 10) {
				printf("�Է��Ͻż��� ���ں��� 10�̻� ū���Դϴ�\n");
			}
			if ((input_num - 28) < 10) {
				printf("�Է��Ͻż��� ���ڿ� 10�̸����� ���̳��� ū���Դϴ�\n");
			}
		}
		else if (input_num == 28) {
			printf("�����մϴ� ���ڸ� ���߼̽��ϴ�!!\n");
			break;
		}
	}
	return 0;
}