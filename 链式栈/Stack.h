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
          struct Node* top;     //头结点
           struct Node* base;   //尾结点
}*LinkStackNode;

/*初始化*/
void InitLinkStackNode(LinkStackNode Stack);

/*入栈*/
int PushStack(LinkStackNode L, ElemType e);

/*出栈*/
int PopStack(LinkStackNode L, ElemType* e);

/*获得栈顶元素*/
ElemType GetTop(LinkStackNode L);

/*判断栈是否为空*/
int IsEmpty(LinkStackNode L);

/*获得栈的大小*/
int StackSize(LinkStackNode L);

/*销毁栈*/
void Destroy(LinkStackNode L);