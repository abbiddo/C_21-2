/**
프로그램명 : example03.c
설명 : 평균을 출력하라 / 해당 소스 코드의 빈칸을 채워라  
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
int main()
{
	int i=0;
	float scores[10] = { 67.2f, 84.3f, 97.0f, 87.1f, 71.9f, 63.0f, 90.1f, 88.0f, 79.7f, 95.3f };
	float sum = 0.0f;
	float average;
	
	for (i; i < sizeof(scores) / sizeof(float); i++)
	{
		//____________________
		sum+=scores[i]; 
	}
	
	//_________________________________________________
	average=sum/(sizeof(scores)/sizeof(scores[0]));
	printf("%f\n", average);
}

/**
실행 결과
82.360001
**/ 
