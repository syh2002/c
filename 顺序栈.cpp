//˳��ջ 
#define MAXSIZE 10
#include<stdio.h>
typedef struct
{
	int elem[MAXSIZE];
	int top;
 }seqstack;
 

//�ǿ�ջ 
Seqstack *init()
{
	seqstack *s;
	s=(seqstack *)malloc(sizeof(seqstack));
	s->top=-1;
	return s;
}
//�п�ջ
int empty(seqstack *s)
{
	if(s->top==-1) return 1;
	else return 0;
 } 
//��ջ
int push(seqstack *s,int x)
{
	if(s->top=MAXSIZE-1) return 0;
	else{
		s->top++;
		s->elem[s->top]=x;
		return 1;
	}
 } 
 //��ջ 
int pop(seqstack *s,int *x)
{
	*x=s->elem[s->top];
	s->top--;
	return 1;
}
//ȡջ�� 
int gettop(seqstack *s)
{
	return s->elem[s->top];
 } 

