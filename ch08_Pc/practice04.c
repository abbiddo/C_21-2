/**
���α׷��� : practice04.c
���� : �Է� ������ �迭�� ������ ���� ���� ��� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int count_vowel(char *arr, int length);

int main(){
	char ch, str[100];
	int i=0;
	
	printf("Enter a sample sentence.\n");
	
	while ((ch = getchar()) != '\n') {
		str[i] = ch;
		i++;
	}
	
	printf("Vowels appear %d times.\n",count_vowel(str,i));
	return 0;
}

int count_vowel(char *arr, int length){
	int i,cnt=0;
	char c;
	
	for (i=0;i<length;i++){
		c=*(arr+i);                                                 // �迭�� ��Ҹ� c�� ���� 
		if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') cnt+=1; // �迭�� ��Ұ� �����̶�� ���� ���� 
	}
	return cnt;                                                     // ���� ��ȯ 
}
