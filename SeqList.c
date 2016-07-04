#include "SeqList.h"

void InitSeqList(SeqList *list)
{
	list->base = (ElemType *)malloc(sizeof(ElemType)*SEQLIST_INIT_SIZE);
	list->capacity = 8;
	list->size = 0;
}
void Show_list(SeqList *list)
{
	int i;
	for( i=0 ; i < list->size ; i++)
	{
		printf("%d\n",list->base[i]);		//将base看成一个数组了，所以此处使用了[]
	}
	printf("capacity=%d\tsize=%d\n",list->capacity,list->size);
}
void Push_back(SeqList *list,ElemType e)
{
	if(list->size>=list->capacity)
	{
		printf("链表已满，插入失败！\n");
		return;
	}
	list->base[list->size]=e;
	list->size++;
}
void Push_front(SeqList *list,ElemType e)
{
	if(list->size>=list->capacity)
	{
		printf("链表已满，插入失败！\n");
	}
	//向后移动链表，使第一个元素为空
	int i;
	printf("size=%d\n",list->size);
	for (i=0;i<list->size;i++)
	{
		printf("i=%d\tsize-i=%d\n",i,list->size-i);
		printf("list->base[%d]=%d\t",list->size-i-1,list->base[list->size-i-1]);
		list->base[list->size-i]=list->base[list->size-1-i];
	}
//	int i;
//	for(i=0;i>list->size;i++)
//	{
//		list->base[list->size-i]=list->base[list->size-1-i];
//		printf("size=%d\n",list->size-i);
//	}
//	Show_list(list);
//	list->base[0]=e;
//	list->size++;
}
void Clear(SeqList *list)
{
	InitSeqList(list);

}
