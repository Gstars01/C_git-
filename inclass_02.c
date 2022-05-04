#include<stdio.h>
#include<stdlib.h>

typedef struct grade {
	int kor, eng, mat;
}grades;

void calculate_mean(grades*);
grades mean;

int main()
{
	grades student[10];

	//임의의 성적
	for (int i = 0; i < 10; i++) {
		student[i].kor = rand() % 100;//0~99
		student[i].eng = rand() % 100;//0~99
		student[i].mat = rand() % 100;//0~99

	}
	for (int i = 0; i < 10; i++) {
		calculate_mean(&student[i]);
	}
}

void calculate_mean(grades* student)
{
	mean.eng += student->eng;
	mean.kor += student->kor;
	mean.mat += student->mat;
}