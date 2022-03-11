#include<stdio.h>
#define MAXSIZE 10
typedef struct
{
	int elem[MAXSIZE];
	int lefttop;	//×óÕ»Õ»¶¥Ö¸Ê¾ 
	int righttop;	//ÓÒÕ»Õ»¶¥Ö¸Ê¾ 
 } Dstack;
 
 //³õÊ¼»¯
 int init(Dstack *s)
 {
 	s->lefttop=-1;
 	s->righttop=MAXSIZE;
 	return 0;
  } 
int push(Dstack *s,char status,int x)
{
	if(s->lefttop+1==s->righttop) return 1; //Õ»Âú
	if(status=='L'){
		s->elem[++s->lefttop] = x;
	} 
	else if(status=='R') s->elem[--s->righttop]=x;
	else return 1;
	
	return 0; 
}
int pop(Dstack *s,char status)
{
	if(status=='L')
	{
		if(s->lefttop<0) return 1;
		else return (s->elem[s->lefttop--]);
	 } 
	 else if(status=='R')
	 {
	 	if(s->righttop>MAXSIZE-1) return 1;
	 	else return (s->elem[s->righttop++]);
	 }
	 else return 0;
}
