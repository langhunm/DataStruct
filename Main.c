#include "SeqList.h"

void main()
{
	SeqList mylist;
	SeqList mylist1;
	InitSeqList(&mylist);
	InitSeqList(&mylist1);
	
//	ElemType b =9;
	mylist1.base[0]=9;
	mylist1.base[1]=2;
	mylist1.size=2;	
	printf("%d\n",mylist1.base[0]);

	ElemType item;
	int x;
	int pos;
	int select = 1;
	while(select)
	{
		printf("*******************************************\n");
		printf("*  [1] push_back	[2] push_front    *\n");
		printf("*  [3] show_list	[4] pop_back      *\n");
		printf("*  [5] pop_front	[6] insert_pos    *\n");
		printf("*  [7] find		[8] lenght        *\n");
		printf("*  [9] delet_pos	[10] delet_val    *\n");
		printf("*  [11] sort		[12] resver       *\n");
		printf("*  [13] clear		[14] destroy      *\n");
		printf("*  [0] quite_system		          *\n");
		printf("*******************************************\n");
		printf("请选择");
		scanf("%d",&select);
		if (select== 0)
			break;
		switch(select)
		{
		case 1:
			printf("请输入要插入的数据（-1为结束）：\n");
//			scanf("%d",&item);
//			printf("item=%d",item);
//			Push_back(&mylist,item);
			while(scanf("%d",&item),item != -1)
			{
				Push_back(&mylist,item);

			}

			break;
		case 2:
			printf("请输入要头插入的数据（-1为结束）：\n");
//			scanf("%d",&item);
//			Push_front(&mylist,item);
			while(scanf("%d",&item),item!=-1)
			{
				Push_front(&mylist,item);
			
			}
			break;
				
		case 3:
			Show_list(&mylist);
//			Show_list(&mylist1);
			break;

		case 4:
			Pop_back(&mylist);
			break;

		case 5:
			Pop_front(&mylist);
			break;
		case 6:
//			int x;
//			int pos;
			printf("当前链表长度为%d\n",mylist.size);
			printf("请输入要插入的值和位置(注意：位置不能大于链表长度)：\n");
			scanf("%d,%d",&x,&pos);
//			printf("x=%d,pox=%d\n",x,pos);
			Insert_pos(&mylist,x,pos);
			break;
		case 7:	
			printf("输入查询的值\n");
			scanf("%d",&x);
			printf("%b\n",find(&mylist,x));
			break;
		case 13:
			Clear(&mylist);
		default:
			printf("input error,please input again:\n");
			break;
		}
	}

}
