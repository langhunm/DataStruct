#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include<stdio.h>
#include <stdlib.h>
#define SEQLIST_INIT_SIZE 8 


typedef int ElemType;
typedef struct SeqList
//typedef struct SeqList
{
	ElemType *base;
	int capacity;
	int size;
}SeqList;

void InitSeqList(SeqList *list);
void Show_list(SeqList *list);
void Push_back(SeqList *list,ElemType e);


#endif
