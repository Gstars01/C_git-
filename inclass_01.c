#include <stdio.h>

typedef struct grade
{
	int kor, eng, mat;
}grades;



void calculate_mean(grades);

void main() {
	grades student[10];
	grades share_grade;
	//�����Է� 
	for (int i = 0; i < 10; i++) {
		student[i].kor = 100;
		student[i].eng = 80;
		student[i].mat = 60;

	}
	//�ʱ�ȭ
	share_grade.mat = 0;
	share_grade.eng = 0;
	share_grade.kor = 0;

	for (int i = 0; i < 10; i++) {
		calculate_mean(student[i]);
	}
	printf("���м��� ==> %f\n", (float)share_grade.mat / 10);
	printf("����� ==> %f\n", (float)share_grade.eng / 10);
	printf("����� ==> %f\n", (float)share_grade.kor / 10);
}
void calculate_mean(grades student)
{
	share_grade.mat += student.mat;
	share_grade.eng += student.eng;
	share_grade.kor += student.kor;
}