#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(){
	char letter;
	scanf("%c",&letter);
	letter=toupper(letter);
	switch(letter){
		case'T':printf("������ڶ�����ĸ:\n");
			if((letter=getch())=='u')
				printf("Tuesday");
			else if((letter=getch())=='h')
				printf("Thursday");
			else
				printf("error");
				break;
		default:
			printf("error"); 
	}
	getchar();
	getchar();
}
