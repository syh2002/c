#include<stdio.h>

//���� 
typedef int DataType;
typedef struct node{
	DataType data;
	struct node * next;
}Lnode,* Linklist; 

//ͷ�� 
Linklist create_head_Linklist()
{
	Linklist H=(Linklist)malloc(sizeof(Lnode));		//����ͷ�ڵ� 
	H->next=NULL;									//�ձ�
	
	Lnode *s;	//sָ��������Ľ��
	int x; 
	scanf("%d",&x);
	
	while(x!=-1)
	{
		s=(Linklist)malloc(sizeof(Lnode));
		s->data=x;
		s->next=H->next;
		H->next=s;
		scanf("%d",&x); 
	 } 
	 return H;
 } 
 
 //β��
Listlist create_tail-Linklist()
{
	Linklist H=(Linklist)malloc(sizeof(Lnode));
	H->next=NULL;
	Lnode *s,r=H; //r��ʱ��δ��� 
	
	int x;
	scanf("%d",&x);
	
	while(x!=-1)
	{
		s=(Linklist)malloc(sizeof(Lnode));
		s->data=x;
		
		r->next=s;
		r=s;
		
		scanf("%d",&x); 
	}
	r->next=NULL;
	return H;
	
 } 
 
 //����
 void reverse(Linklist H)
 {
 	Lnode *p,*q;	//pָ���һ�����ݽ��
 	p=H->next;
	H->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=H->next;	//ͷ�� 
		H->next=q;
	 } 
  } 
