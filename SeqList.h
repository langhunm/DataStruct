#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include<stdio.h>

#define SEQLIST_INIT_SIZE 8 


typedef int ElemType;
typedef struct SeqList
{
	ElemType *base;
	int capacity;
	int size;
}SeqList;

void InitSeqList(SeqList *list);

#endif
