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
	printf("\n");
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
