#include<stdio.h>
int main(){
	int num;
	printf("����������:\n");
	scanf("%d",&num);
	while(num!=0){
		if(num%10!=0)
		 printf("%d",num%10);
		num/=10;
	}
	return 0;
}
//int t=0,num��d;
//scnaf("%d",&num);
//do{
//	d=num%10;//�õ����һλ��������ʵ������������λ
//	num/=10; //ȥ�����һλ��
//	t=t*10+d; 
//} while(num>0);
