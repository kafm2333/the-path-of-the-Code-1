////���׷���:����������ף������������������Ȱ����ֵ�������
////���������
//int t=0,num��d;
//scnaf("%d",&num);
//do{
//	d=num%10;//�õ����һλ��������ʵ������������λ
//	num/=10; //ȥ�����һλ��
//	t=t*10+d;
//} while(num>0);
#include<stdio.h>
int main() {
	int num,i=1,flag=1;
	scanf("%d",&num);
	while(i<num&&(num-i)>i) {
		i*=10;
	}
	for(; i>0; i/=10) {
//			if(i==1){
//				printf("%d",num/i);
//				continue;     ʹ���һλ�����û�пո�
		printf("%d ",num/i);
		num%=i;
	}
	return 0;
}
