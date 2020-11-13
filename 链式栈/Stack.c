#include"Stack.h"

/*��ʼ��*/
void InitLinkStackNode(LinkStackNode Stack)
{
          Node *L = (Node*)malloc(sizeof(Node));   //����һ��ͷ���
          L->next = NULL;
          Stack->top = L;    //ջ�Ķ���ָ��ͷ���
          Stack->base = L;   //ջ�ĵײ�ָ��ͷ���
}

/*��ջ*/
int PushStack(LinkStackNode L, ElemType e)
{
          Node* newnode = (Node*)malloc(sizeof(Node));
          newnode->e = e;
          newnode->next = NULL;
          
          if (L->top->next == NULL)               //��Ԫ���Ϊ��
          {
                    L->top->next = newnode;   //��Ԫ��㸳ֵ
                    L->base = newnode;           //��Ԫ���Ҳ��β��㵱ǰ
          }
          else
          {
                    newnode->next = L->top->next;
                    L->top->next = newnode;   //������Ԫ���
          }
          return TRUE;
}

int PopStack(LinkStackNode L, ElemType* e)
{
          if (L->top->next == NULL)    //�жϲ��ǿձ�
          {
                    return FALSE;
          }

          Node* temp = L->top->next;              //ʹ����Ԫ���
          *e = temp->e;
          if (temp->next == NULL)                 //���ջ�е�ǰֻ��һ��Ԫ��
          {
                    L->top->next = NULL;
                    L->base = L->top;   //ͬ��ָ��ͷ���base = top
          }
          else
          {
                    L->top->next = temp->next;   //������Ԫ���
          }
       
          free(temp);
          return TRUE;
}

/*���ջ��Ԫ��*/
ElemType GetTop(LinkStackNode L)
{
          return L->top->next->e;
}

/*���ջ�Ĵ�С*/
int StackSize(LinkStackNode L)
{
          return ((L->base) - (L->top));
}

/*�ж�ջ�Ƿ�Ϊ��*/
int IsEmpty(LinkStackNode L)
{
          return (L->base == L->top);
}

/*����ջ*/
void Destroy(LinkStackNode L)
{
          for (Node* px = L->top; px < L->base; px = px->next)
          {
                    free(px);
          }
          L->base = L->top = NULL;
}