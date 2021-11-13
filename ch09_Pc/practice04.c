/**
프로그램명 : practice04.c
설명 : strcmp함수와 동일한 역할을 하는 my_strcmp 함수 작성 
작성일시 : 2021.11.12
작성자 : 정소영
**/

#include <stdio.h>
int my_strcmp(const char *str1, const char *str2);       // 함수 선언 

int main(){
	char word1[30];
	char word2[30];
	
	while(1){
		printf("문자열 입력 : ");                        
		scanf("%s",word1);
		
		if (word1[0] == 'q' && word1[1] == 'u' && word1[2] == 'i' && word1[3] == 't' && word1[4] == '\0') break;
		// quit이 입력되면 반복문 종료 
		
		printf("문자열 입력 : ");                        
		scanf("%s",word2);
		
		if (word2[0] == 'q' && word2[1] == 'u' && word2[2] == 'i' && word2[3] == 't' && word2[4] == '\0') break;
		
		my_strcmp(word1,word2);                          // 함수 호출 
	}
	
	printf("프로그램 종료");
} 

int my_strcmp(const char *str1, const char *str2){
	int i=-1, result=0;
	
	while(1){
		i++;
		if (str1[i]=='\0' && str2[i]=='\0') break;       // 두 문자열의 i번째 값이 모두 NULL문자면 반복문 종료  
		
		if (str1[i]==str2[i]) continue;                  // 두 문자열의 i번째 값이 서로 같으면 continue 
		
		else if (str1[i]>str2[i]){                       // str1의 i번째 값이 str2의 i번째 값보다 더 크면 
			result=1;									 // result를 1로 저장하고 str1을 str에 저장 후 반복문 종료 
			printf("%s\n",str1);
			break;
		}
		
		else{											 // str2의 i번째 값이 str1의 i번째 값보다 더 크면 
			result=-1;									 // result를 -1로 저장하고 str2을 str에 저장 후 반복문 종료 
			printf("%s\n",str2);
			break;
		}
	}
	
	return result;										 // 두 문자열 비교 후 strcmp와 동일한 반환값(result) 반환 
}
