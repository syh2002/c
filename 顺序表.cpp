#include<stdio.h>

//顺序表的定义 
#define MAXSIZE 20
typedef int DataType;
typedef struct node{
	DataType elem[MAXSIZE];
	int length;
}list; 
//初始化
void init(list *L)
{
	L->length=0;
} 
//插入
void insert(list *L,int i,int x)//i是插入位置 
{
	
	if(L->length==MAXSIZE)
	{
		printf("表满"); 
	}
	
	int j;
	for(j=L->length;j>=i;j--)
	{
		L->elem[j+1]=L->elem[j]; //每位后移 
	}
	L->elem[i]=x;
	L->length++;
 } 
