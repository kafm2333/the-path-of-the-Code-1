#include<stdio.h>
int main() {
	int yh[100],re[100],i,j,k,cp,n;
	for(i=0;i<100;i++){
		yh[i]=1;
		re[i]=1;
	}
	scanf("%d",&n);
	printf("%d\n",1);
	printf("%d %d\n",1,1);
	for(i=1; i<n-1; i++) {
		for(j=1; j<=i; j++) {
			yh[j]=re[j]+re[j-1];
		}
		for(cp=0;cp<n;cp++){
			re[cp]=yh[cp];
		}
		for(k=0;k<=i+1;k++){
			printf("%d ",yh[k]);
			
		}
		printf("\n");
	}
	return 0;
}

