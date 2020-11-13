#include"LinkStack.h"

int main()
{
		  LinkStack linkstack;			//链式栈
		  InitLinkStack(&linkstack);	//初始化链式栈
		  for(int i = 0 ; i < 5 ; ++i)
		  {
					Push_Stack(&linkstack, i);
		  }
		  return 0;
}