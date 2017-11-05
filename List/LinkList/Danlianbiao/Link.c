#include <assert.h>
#include <stddef.h>
#include "Link.h"


void InitList(List *head)
{
    *head =(ListNode*)malloc(sizeof(ListNode));
    assert(*head != NULL);
    (*head)->next = NULL; 
}

void DestoryList(List *list)
{
}

void ClearList(List *list)
{
}

bool ListEmpty(List *list)
{
    return true;
}

int ListLength(List *list)
{
    return 1;
}

void GetEle(List *list,int i,ElemType* value)
{
}


int LocateElem(List *list,ElemType e)
{
    return 1;
}

bool PriorElem(List *list,ElemType cur_e,ElemType* pre_e)
{
    return true;
}

bool NextElem(List *list,ElemType cur_e,ElemType* pre_e)
{
    return true;
}

bool ListInsert(List *list,int i,ElemType e)
{
    return true;
}

bool ListDelete(List *list,int i,ElemType* value)
{
    return true;
}

