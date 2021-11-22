/**
프로그램명 : practice02.c
설명 : 3명의 이름, 나이, 성별을 키보드로 입력 받고 나이 오름차순으로 출력  
작성일시 : 2021.11.22
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>
typedef struct {         // 익명 구조체 
	char name[20];       // 이름 
	int age;             // 나이 
	char gender;         // 성별 
}Person;

void input(Person p1[],int i);
void output(Person p1[],int i);

int main(){
	Person p1[3];                // 구조체 배열 선언 
	int temp,i,j;
	char tmp[20],tp;
	
	while(1){ 
	printf("첫번째 사람 : ");
	input(p1,0);                 // 첫번째 사람 입력 
	if (p1[0].age>120 || p1[0].age<0) printf("입력된 나이 확인\n");    // 나이 범위를 벗어날 시 오류 메시지 출력 
	else break;                                                        // 나이 범위에 적합하면 반복문 break 
	}
	
	while(1){ 
	printf("두번째 사람 : ");
	input(p1,1);                 // 두번째 사람 입력  
	if (p1[1].age>120 || p1[1].age<0) printf("입력된 나이 확인\n");    // 나이 범위를 벗어날 시 오류 메시지 출력 
	else break;                                                        // 나이 범위에 적합하면 반복문 break 
	}
	
	while(1){ 
	printf("세번째 사람 : ");
	input(p1,2);                 // 세번째 사람 입력 
	if (p1[2].age>120 || p1[2].age<0) printf("입력된 나이 확인\n");    // 나이 범위를 벗어날 시 오류 메시지 출력 
	else break;                                                        // 나이 범위에 적합하면 반복문 break 
	}
	
	// 버블 정렬 
	for (i=0;i<3;i++){
		for (j=0;j<3-i-1;j++){
			if (p1[j].age>p1[j+1].age){             // 조건에 맞으면                   
				temp=p1[j].age;                     // 나이 위치 바꾸기 
				p1[j].age=p1[j+1].age;
				p1[j+1].age=temp;
				
				strcpy(tmp,p1[j].name);             // 이름 위치 바꾸기 
				strcpy(p1[j].name,p1[j+1].name);
				strcpy(p1[j+1].name,tmp);
				
				tp=p1[j].gender;                    // 성별 위치 바꾸기 
				p1[j].gender=p1[j+1].gender;
				p1[j+1].gender=tp;
			}
		}
	}
	
	output(p1,0);                // 첫번째 사람 출력 
	output(p1,1);                // 두번째 사람 출력 
	output(p1,2);                // 세번째 사람 출력 
} 

void input(Person p1[],int i){
	scanf("%s %d %c",&p1[i].name,&p1[i].age,&p1[i].gender);                       // 이름, 나이, 성별 입력 
}

void output(Person p1[],int i){
	if (p1[i].gender=='m') printf("%s은 남자이고 %d살이다.\n",p1[i].name,p1[i].age);    // 남자일 경우 출력 
	else printf("%s은 여자이고 %d살이다.\n",p1[i].name,p1[i].age);                      // 여자일 경우 출력 
}
