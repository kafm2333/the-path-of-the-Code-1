#include<stdio.h>
#include<math.h>

struct info {
	char str[22];
	int mark[2];
	char id[2];
	int num;//num ��������
	int money;
};

int main() {
	struct info data[100],t;
	int time,n=100,i,j,max,flag=1;
	long long sum;
	scanf("%d",&time);
	while(time--) {
		for(i=0; i<100; i++) {
			data[i].money=0;
		}
		j=0,sum=0,flag=1;
		scanf("%d",&n);
		for(i=0; i<n; i++) {
			scanf("%s %d %d %c %c %d",&data[j].str,&data[j].mark[0],&data[j].mark[1],&data[j].id[0],&data[j].id[1],&data[j].num);
			j++;
		}
		for(i=0; i<n; i++) { //���㽱ѧ��
			if(data[i].mark[0]>80&&data[i].num>=1) { //Ժʿ��ѧ��
				data[i].money+=8000;
			}
			if(data[i].mark[0]>85&&data[i].mark[1]>80) { //���Ľ�ѧ��
				data[i].money+=4000;
			}
			if(data[i].mark[0]>90) { //�ɼ����㽱
				data[i].money+=2000;
			}
			if(data[i].id[1]=='Y'&&data[i].mark[0]>85) { //������ѧ��
				data[i].money+=1000;
			}
			if(data[i].id[0]=='Y'&&data[i].mark[1]>80) { //�༶���׽�
				data[i].money+=850;
			}
		}
		for(i=1; i<n; i++) {
			for(j=0; j<n-i; j++) {
				if(data[j].money>data[j+1].money) {
					t=data[j],data[j]=data[j+1],data[j+1]=t;
				}
			}
		}
		for(max=data[n-1].money,i=0; i<n; i++) {
			sum+=data[i].money;
			if(data[i].money==max) {
				if(flag) {
					printf("%s\n",data[i].str);
					flag=0;
				}
			}
		}
		printf("%d\n%lld\n",max,sum);
	}
	return 0;
}
