#include<stdio.h>
int main(void)
{
	int age;
	int math_score;
	int IQ;
	printf("Please enter your age:\n");
	scanf_s("%d", &age);
	//  age = ����ֵ    age=19      &�ҵ�age

	if (age <= 18)
	{ 
		printf("��ȥѧϰ\n");
		return 0;
	}
	
	printf("Please enter your math_score:\n");
	scanf_s("%d", &math_score);

	printf("Please enter your IQ:\n");
	scanf_s("%d", &IQ);

	if (math_score >=140 || IQ >=120)
	{ 
		printf("It's ok bro!\n");
	}
	else
	{
		printf("��ȥѧϰ��\n");
	}


		return 0;
 }