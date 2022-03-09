#include<stdio.h>

//定义 
typedef int DataType;
typedef struct node{
	DataType data;
	struct node * next;
}Lnode,* Linklist; 

//头插 
Linklist create_head_Linklist()
{
	Linklist H=(Linklist)malloc(sizeof(Lnode));		//生成头节点 
	H->next=NULL;									//空表
	
	Lnode *s;	//s指向新申请的结点
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
 
 //尾插
Listlist create_tail-Linklist()
{
	Linklist H=(Linklist)malloc(sizeof(Lnode));
	H->next=NULL;
	Lnode *s,r=H; //r临时的未结点 
	
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
 
 //逆置
 void reverse(Linklist H)
 {
 	Lnode *p,*q;	//p指向第一个数据结点
 	p=H->next;
	H->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=H->next;	//头插 
		H->next=q;
	 } 
  } 
