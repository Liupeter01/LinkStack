#include"LinkStack.h"

int main()
{
		  LinkStack linkstack;			//��ʽջ
		  InitLinkStack(&linkstack);	//��ʼ����ʽջ
		  for(int i = 0 ; i < 5 ; ++i)
		  {
					Push_Stack(&linkstack, i);
		  }
		  return 0;
}