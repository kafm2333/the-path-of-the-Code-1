//��˼·�ɽ������׷��󣬸߽׷������ɷֿ�; 
#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k,m,map[n][n],exam,flag=1;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&map[i][j]);
		}
	}
	for(i=0;i<n; i++) {
		flag=1;
		exam=map[i][i];
		for(j=i+1; j<n; j++) { //�жϺ���
			if(exam!=map[i][j]) {
				flag=0;
				break;
			}
		}
		if(flag) {
			break;//��������ͬexit
		}
		flag=1;
		for(k=i+1; k<n; k++) { //�ж�����
			if(exam!=map[k][i]) {
				flag=0;
				break;
			}
		}
		if(flag){
			break;//������ͬexit 
		}
	}
		if(!flag){ //����������ͬ  �ж�б��1
			flag=1;
			exam=map[0][0];
			for(m=0; m<n; m++) {
				if(exam!=map[m][m]){
					flag=0;
					break;
				}
			}
		}
		if(!flag){//�ж�б��2 
			flag=1;
			exam=map[n-1][0];
			for(m=0;m<n;m++){
				if(exam!=map[m][n-1-m]){
					flag=0;
					break;
				}
			}
		}
		if(flag){
			if(exam==1){
				printf("'��' win ��");
			}
			else if(exam==0){
				printf("'��' win ��"); 
			}
			else{
				printf("error!");
			}
		}
		else{
			printf("tie");
		}
return 0;
}


