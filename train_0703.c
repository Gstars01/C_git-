#include<stdio.h>
int main()
{
	int rannum = 28;
	int input_num,count_num = 0;
	for(;;){
		scanf_s("%d", &input_num);
		if (input_num < 28){
			if ((28 - input_num) >= 10){
				printf("입력하신수는 숫자보다 10이상 작은수입니다\n");
			}
			else if ((28 - input_num) < 10) {
				printf("입력하신수는 숫자와 10미만으로 차이나는 작은수입니다\n");
			}
		}
		if (input_num > 28) {
			if ((input_num - 28) >= 10) {
				printf("입력하신수는 숫자보다 10이상 큰수입니다\n");
			}
			if ((input_num - 28) < 10) {
				printf("입력하신수는 숫자와 10미만으로 차이나는 큰수입니다\n");
			}
		}
		else if (input_num == 28) {
			printf("축하합니다 숫자를 맞추셨습니다!!\n");
			break;
		}
	}
	return 0;
}