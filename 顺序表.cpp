#include<stdio.h>

//˳���Ķ��� 
#define MAXSIZE 20
typedef int DataType;
typedef struct node{
	DataType elem[MAXSIZE];
	int length;
}list; 
//��ʼ��
void init(list *L)
{
	L->length=0;
} 
//����
void insert(list *L,int i,int x)//i�ǲ���λ�� 
{
	
	if(L->length==MAXSIZE)
	{
		printf("����"); 
	}
	
	int j;
	for(j=L->length;j>=i;j--)
	{
		L->elem[j+1]=L->elem[j]; //ÿλ���� 
	}
	L->elem[i]=x;
	L->length++;
 } 
