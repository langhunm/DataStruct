#include "SeqList.h"

void main()
{
	SeqList mylist;
	InitSeqList(&mylist);


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
		if (select=- 0)
			break;
		switch(select)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			printf("input error,please input again:\n");
			break;




		}
	}

}
