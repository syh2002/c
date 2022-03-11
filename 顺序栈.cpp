//À≥–Ú’ª 
#define MAXSIZE 10
#include<stdio.h>
typedef struct
{
	int elem[MAXSIZE];
	int top;
 }seqstack;
 

//÷«øÿ’ª 
Seqstack *init()
{
	seqstack *s;
	s=(seqstack *)malloc(sizeof(seqstack));
	s->top=-1;
	return s;
}
//≈–ø’’ª
int empty(seqstack *s)
{
	if(s->top==-1) return 1;
	else return 0;
 } 
//»Î’ª
int push(seqstack *s,int x)
{
	if(s->top=MAXSIZE-1) return 0;
	else{
		s->top++;
		s->elem[s->top]=x;
		return 1;
	}
 } 
 //≥ˆ’ª 
int pop(seqstack *s,int *x)
{
	*x=s->elem[s->top];
	s->top--;
	return 1;
}
//»°’ª∂• 
int gettop(seqstack *s)
{
	return s->elem[s->top];
 } 

