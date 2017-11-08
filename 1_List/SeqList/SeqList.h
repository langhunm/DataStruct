#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include <stdio.h>
#include <stdlib.h> //define function malloc
#include <stdbool.h> //define NULL

#define SEQLIST_INIT_SIZE 8 //线性表存储空间的初始分配量
#define INC_SIZE 3 //线性表存储空间分配增量

typedef int ElemType;

typedef struct SeqList
{
    ElemType *base; //存储空间基址
    int capacity; //当前分配的存储容量
    int size; //当前长度
}SeqList; //对结构体命名


//初始化线性表，即创建线性表。
void InitSeqList(SeqList *list);

//现行表的增删改查  (能增加，能删除，就能达到更改的目的，所以就没有改的函数。)
//尾插
void push_back(SeqList *list, ElemType e);
//头插
void push_front(SeqList *list, ElemType e);
//按位置插入ElemType
void insert_pos(SeqList *list,int pos,ElemType e);
//尾删
void pop_back(SeqList *list);
//头删
void pop_front(SeqList *list);
//按定位删除
void del_pos(SeqList *list,int pos);
//按ElemType删除
void del_val(SeqList *list,ElemType e);
//按位置查找
bool find_pos(SeqList *list,int pos,ElemType *e);
//按ElemType查找
bool find_Elem(SeqList *list,ElemType e,int *pos);

//对整个线性表的操作
bool Inc(SeqList *list); //对线性表空间的增加
//排序
void sort(SeqList *list);
//反转
void resver(SeqList *list);
//清除
void clear(SeqList *list);
//销毁
void destroy(SeqList *list);
//合并线性表
void merge(SeqList *list1,SeqList *list2,SeqList *list_merge);
//打印列表内容
void show_list(SeqList *list);

#endif //__SEQLIST_H__

