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
			break;
		case 3:
			Show_list(&mylist);
			Show_list(&mylist1);
			break;
		default:
			printf("input error,please input again:\n");
			break;




		}
	}

}
