//��˼·�ɽ������׷��󣬸߽׷������ɷֿ�;
#include<stdio.h>//1:�𣬣�0��X 
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k,m,map[n][n],exam,flag=1;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&map[i][j]);
		}
	}
	for(i=0; i<n; i++) {
		flag=0;
		exam=map[i][i];
		for(j<n-1?j=i+1:j=0; j<n; j++) { //�жϺ���
			if(exam!=map[i][j]) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			break;//��������ͬexit
		}
		flag=0;
		for(k<n-1?k=i+1:k=0; k<n; k++) { //�ж�����
			if(exam!=map[k][i]) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			break;//������ͬexit
		}
	}
	if(flag) { //����������ͬ  �ж�б��1
		flag=0;
		exam=map[0][0];
		for(m=0; m<n; m++) {
			if(exam!=map[m][m]) {
				flag=1;
				break;
			}
		}
	}
	if(flag) { //�ж�б��2
		flag=0;
		exam=map[n-1][0];
		for(m=0; m<n; m++) {
			if(exam!=map[m][n-1-m]) {
				flag=1;
				break;
			}
		}
	}
	if(!flag) {
		if(exam==1) {
			printf("'��' win ��");
		} else if(exam==0) {
			printf("'��' win ��");
		} else {
			printf("error!");
		}
	} else {
		printf("tie");
	}
	return 0;
}


