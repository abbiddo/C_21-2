/**
���α׷��� : example03.c
���� : ����� ����϶� / �ش� �ҽ� �ڵ��� ��ĭ�� ä����  
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
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
���� ���
82.360001
**/ 
