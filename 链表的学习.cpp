#include<stdio.h>
#include<stdlib.h>

typedef struct info {
	int num;
	struct info * next;
} node;

typedef struct List {
	node *head;//ָ�������ͷ
	node *tail;//ָ�������β//��������������
} List;//����List����һ���ṹ�壬�Ϳ��Թ�����һ���б�

void add(List *list,int n);//��
void print(List *list);//�����������
void search(List *list,int num);//��
int main() {
	int num;
	List list;
	list.head=NULL,list.tail=NULL;//��ʼ��
	while(scanf("%d",&num),num!=-1) {
		add(&list,num);
	}
	print(&list);
	scanf("%d",&num);
	search(&list,num);
	return 0;
}

void add(List *plist,int n) {
	node *p=(node *)malloc(sizeof(node));
	p->num=n;
	p->next=NULL;
	if(plist->head) {//�������Ϊ��
		plist->tail->next=p;
		plist->tail=p;

	} else {
		plist->head=plist->tail=p;
	}
}

void print(List *plist) { //�����޸ļ���Ϊ��
	node *p;
	for(p=plist->head; p; p=p->next) {
		printf("%d ",p->num);
	}
}
void search(List *plist,int obj) {
	node *p;
	for(p=plist->head; p; p=p->next) {
		if(p->num==obj) { /*��ô��ô��*/
			printf("%d ",p->num);//�����Ҫ���������
		}
	}
}
