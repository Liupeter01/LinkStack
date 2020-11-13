#include<stdio.h>
#include<stdlib.h>

#define ElemType 

typedef struct Node
{
          ElemType e;
          struct Node* next;
}Node;

typedef struct StackNode
{
          struct Node* top;     //ͷ���
           struct Node* base;   //β���
}*LinkStackNode;

/*��ʼ��*/
void InitLinkStackNode(LinkStackNode Stack);

/*��ջ*/
int PushStack(LinkStackNode L, ElemType e);

/*��ջ*/
int PopStack(LinkStackNode L, ElemType* e);

/*���ջ��Ԫ��*/
ElemType GetTop(LinkStackNode L);

/*�ж�ջ�Ƿ�Ϊ��*/
int IsEmpty(LinkStackNode L);

/*���ջ�Ĵ�С*/
int StackSize(LinkStackNode L);

/*����ջ*/
void Destroy(LinkStackNode L);