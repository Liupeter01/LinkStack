#include"Stack.h"

/*初始化*/
void InitLinkStackNode(LinkStackNode Stack)
{
          Node *L = (Node*)malloc(sizeof(Node));   //创建一个头结点
          L->next = NULL;
          Stack->top = L;    //栈的顶部指向头结点
          Stack->base = L;   //栈的底部指向头结点
}

/*入栈*/
int PushStack(LinkStackNode L, ElemType e)
{
          Node* newnode = (Node*)malloc(sizeof(Node));
          newnode->e = e;
          newnode->next = NULL;
          
          if (L->top->next == NULL)               //首元结点为空
          {
                    L->top->next = newnode;   //首元结点赋值
                    L->base = newnode;           //首元结点也是尾结点当前
          }
          else
          {
                    newnode->next = L->top->next;
                    L->top->next = newnode;   //更新首元结点
          }
          return TRUE;
}

int PopStack(LinkStackNode L, ElemType* e)
{
          if (L->top->next == NULL)    //判断不是空表
          {
                    return FALSE;
          }

          Node* temp = L->top->next;              //使用首元结点
          *e = temp->e;
          if (temp->next == NULL)                 //这个栈中当前只有一个元素
          {
                    L->top->next = NULL;
                    L->base = L->top;   //同样指向头结点base = top
          }
          else
          {
                    L->top->next = temp->next;   //跳过首元结点
          }
       
          free(temp);
          return TRUE;
}

/*获得栈顶元素*/
ElemType GetTop(LinkStackNode L)
{
          return L->top->next->e;
}

/*获得栈的大小*/
int StackSize(LinkStackNode L)
{
          return ((L->base) - (L->top));
}

/*判断栈是否为空*/
int IsEmpty(LinkStackNode L)
{
          return (L->base == L->top);
}

/*销毁栈*/
void Destroy(LinkStackNode L)
{
          for (Node* px = L->top; px < L->base; px = px->next)
          {
                    free(px);
          }
          L->base = L->top = NULL;
}