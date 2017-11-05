#ifndef LINK_H
#define LINK_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ElemType int

typedef struct ListNode
{
    ElemType data;
    struct ListNode *next;
}ListNode;

typedef ListNode* List;

void InitList(List *head);

void DestoryList(List *list);

void ClearList(List *list);

bool ListEmpty(List *list);

int ListLength(List *list);

void GetEle(List *list,int i,ElemType* value);


int LocateElem(List *list,ElemType e);

bool PriorElem(List *list,ElemType cur_e,ElemType* pre_e);

bool NextElem(List *list,ElemType cur_e,ElemType* pre_e);

bool ListInsert(List *list,int i,ElemType e);

bool ListDelete(List *list,int i,ElemType* value);

#endif
