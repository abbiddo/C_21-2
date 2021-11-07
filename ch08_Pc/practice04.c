/**
프로그램명 : practice04.c
설명 : 입력 문장을 배열에 저장후 모음 개수 출력 
작성일시 : 2021.11.07
작성자 : 정소영
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
		c=*(arr+i);                                                 // 배열의 요소를 c에 저장 
		if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') cnt+=1; // 배열의 요소가 모음이라면 개수 증가 
	}
	return cnt;                                                     // 개수 반환 
}
