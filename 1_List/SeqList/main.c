#include "SeqList.h"

void main()
{
    SeqList mylist;
    InitSeqList(&mylist);
    ElemType Item;
    int pos;
    int select = 1;
    while(select)
    {
        printf("**********************************************\n");
        printf("**  [1] push_back       [2] push_front      **\n");
        printf("**  [3] pop_back        [4] pop_front       **\n");
        printf("**  [5] insert_pos      [6] show_list       **\n");
        printf("**  [7] del_pos         [8] del_val         **\n");
        printf("**  [9] find_pos        [10]find_Elem       **\n");
        printf("**  [11]sort            [12]resver          **\n");
        printf("**  [13]clear           [14]merge           **\n");
        printf("**  [15]destroy         [0]quit_system      **\n");
        printf("**********************************************\n");


        printf("请选择:>");
        scanf("%d",&select);
        if(select == 0)
        {
            break;
        }
        switch(select)
        {
            case 1:
            {
                printf("请输入要插入的数据（-1结束）:>");
                while(scanf("%d",&Item),Item!=-1) //此处为逗号表达式，真假值由最后一个表达式决定，
                //所以此处在扫描到Item不是-1时就会自动执行一下下面的函数，
                //所以每输入一次非-1的数就头插一次。
                {
                    push_back(&mylist,Item);
                }
                break;
            }
            case 2:
            {
                printf("请输入要插入的数据（-1结束）:>");
                while(scanf("%d",&Item),Item!=-1) //此处为逗号表达式，真假值由最后一个表达式决定，
                //所以此处在扫描到Item不是-1时就会自动执行一下下面的函数，
                //所以每输入一次非-1的数就头插一次。
                {
                    push_front(&mylist,Item);
                }
                break;
            }
            case 3:
            {
                pop_back(&mylist);
                break;
            }
            case 4:
            {
                pop_front(&mylist);
                break;
            }
            case 5:
            {
                ElemType e;
                printf("请输入要插入的位置，当前有元素%d:",mylist.size);
                scanf("%d",&pos);
                printf("请输入要插入的元素值:");
                scanf("%d",&e);
                insert_pos(&mylist,pos,e);
                break;
            }
            case 6:
            {
                show_list(&mylist);
                break;
            }
            case 7:
            {
                printf("请输入要删除的位置，当前有元素%d:",mylist.size);
                scanf("%d",&pos);
                del_pos(&mylist,pos);
                break;
            }
            case 8:
            {
                printf("请输入要删除的元素:");
                scanf("%d",&Item);
                printf("start and Item=%d\n",Item);
                del_val(&mylist,Item);
                break;
            }
            case 9:
            {
                printf("请输入要查找线性表元素的位置:");
                scanf("%d",&pos);
                find_pos(&mylist,pos,&Item);
                printf("线性表的第%d个元素为:%d\n",pos,Item);
                break;
            }
            case 10:
            {
                printf("请输入要查找的元素:");
                scanf("%d",&Item);
                find_Elem(&mylist,Item,&pos);
                printf("元素%d所在位置为:%d\n",Item,pos);
                break;
            }
            case 11:
            {
                sort(&mylist);
                break;
            }
            case 12:
            {
                printf("resver start.\n");
                resver(&mylist);
                printf("resver end!\n");
                break;
            }
            case 13:
            {
                clear(&mylist);
                break;
            }
            case 14:
            {
                printf("目前无法测试，因为只有一个线性表，无法做合并操作。\n");
                //merge(SeqList *list1,SeqList *list2,SeqList *list_merge);
                break;
            }
            case 15:
            {
                destroy(&mylist);
                break;
            }
            default:
            {
                printf("输入的选择不存在，请重新输入。\n");
                select=1;
                break;
            }
        }
    }
}
