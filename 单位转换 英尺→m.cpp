#include<stdio.h>
main()
{ 
float a,b,c;
printf("������(Ӣ�� Ӣ��):\n");//�����ʽ��ΪӢ��.Ӣ��ʱ��������� 
scanf("%f %f",&a,&b);
c=a+b/12.0;
printf("%f\n",c);
printf("TA �������%.4fm\n",c*0.3048);
return 0;}
