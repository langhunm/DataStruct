#include "SeqList.h"

void InitSeqList(SeqList *list)
{
	list->base = (ElemType *)malloc(sizeof(ElemType)*SEQLIST_INIT_SIZE);
	list->capacity = 8;
	list->size = 0;
}
