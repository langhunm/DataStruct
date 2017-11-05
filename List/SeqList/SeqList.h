#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
void Push_front(SeqList *list,ElemType e);
void Pop_back(SeqList *list);
void Pop_front(SeqList *list);
void Insert_pos(SeqList *list,int x,int pos);
void Clear(SeqList *list);
int Find(SeqList *list,int x);
int Length(SeqList *list);
bool Del_pos(SeqList *list , int pos);
bool Del_val(SeqList *list, int value)
bool Resver(SeqList *list)
void Destroy(SeqList *list)
void Destroy(SeqList *list)
#endir
#endir
