#include "SeqList.h"
#include <assert.h> //define function assert.

//初始化线性表，即创建线性表。
void InitSeqList(SeqList *list)
{
    //线性表的顺序实现实质上是用一段连续的内存空间表示线性表，所以根据线性表元素大小*元素个数分配内存。
   
    list->base =(ElemType*)malloc(sizeof(ElemType) * SEQLIST_INIT_SIZE); //
    assert(list->base != NULL);
    list->capacity = SEQLIST_INIT_SIZE;
    list->size = 5;

    for(int i =0;i<list->size;i++)
    {
        list->base[i]=i+1;
    }
}
//--------------------------------------------------------//


//现行表的增删改查  (能增加，能删除，就能达到更改的目的，所以就没有改的函数。)
//尾插
void push_back(SeqList *list, ElemType e)
{
    if(list->size >= list->capacity && !Inc(list) ) //线性表满了，并且扩容失败，则提示错误信息。
    {
        printf("顺序表空间已满，%d不能尾插数据。\n",e);
        return;
    }
    list->base[list->size] = e;
    list->size++;
}
//头插
void push_front(SeqList *list, ElemType e)
{
    if(list->size >= list->capacity && !Inc(list) ) //线性表满了，并且扩容失败，则提示错误信息。
    {
        printf("顺序表空间已满，%d不能尾插数据。\n",e);
        return;
    }
    for(int i = list->size;i>0;--i)
    {
        list->base[i]=list->base[i-1];
    }
    list->base[0]=e;
    list->size++;

}
//按位置插入ElemType
void insert_pos(SeqList *list,int pos,ElemType e)
{
    if( pos<=0 || pos>list->size)
    {
        printf("插入数据的位置非法，不能插入数据。\n");
        return;
    }
    if(list->size >= list->capacity && !Inc(list) )
    {
        printf("顺序表空间已满，%d不能按位置插入数据。\n",e);
        return;
    }
    for(int i=list->size;i>=pos-1;--i)  // 从线性表pos位置开始向后挪动个位置，所以从数组下表来说就是从pos-1位置开始到list->size结束。 
    {
        list->base[i] = list->base[i-1];
    }
    list->base[pos-1]=e;
    list->size++;
}
//尾删
void pop_back(SeqList *list)
{
    if(list->size <=0)
    {
        printf("顺序表为空。无法尾部删除元素。\n");
        return;
    }
    list->size--;


}
//头删
void pop_front(SeqList *list)
{
    if(list->size <=0)
    {
        printf("顺序表为空。无法尾部删除元素。\n");
        return;
    }
    for(int i=0 ;i<list->size-1; ++i)
    {
        list->base[i] = list->base[i+1];
    }
    list->size--;

}
//按定位删除
void del_pos(SeqList *list,int pos)
{
    if(pos<0 || pos>list->size)
    {
        printf("删除数据的位置非法，不能插入数据。\n");
        return;
    }
    for(int i=pos-1; i <=list->size-2 ;++i)
    {
        list->base[i]=list->base[i+1];
    }
    list->size--;
}
//按ElemType删除
void del_val(SeqList *list,ElemType e)
{
    int index=0;
    int result=-1;
    for( index=0; index<list->size;index++)
    {
        if(list->base[index] == e)
        {
            result=index;
            break;
        }
    }
    if(result !=-1)
    {
        del_pos(list,result+1);
    }else
    {
        printf("该线性表中无此值%d\n",e);
    }

}
//按位置查找
bool find_pos(SeqList *list,int pos,ElemType *e)
{
    if(pos <= list->size)
    {
        *e=list->base[pos-1];
        return true;
    }else
    {
        printf("输入的位置不存在。\n");
        return false;
    }
}
//按ElemType查找
bool find_Elem(SeqList *list,ElemType e,int *pos)
{
    int index=0;
    int result=-1;
    for( index=0; index<list->size;index++)
    {
        if(list->base[index] == e)
        {
            result=index;
            break;
        }
    }
    if(result !=-1 )
    {
        *pos = result+1;
        return true;
    }else
    {
        pos = NULL;
        return false;
    }
}


//--------------------------------------------------------//

//对整个线性表的操作
bool Inc(SeqList *list) //对线性表空间的增加
{
    return true;
}
//排序
void sort(SeqList *list)
{
    for(int i=0; i<list->size-1; ++i)
	{
		for(int j=0; j<list->size-i-1; ++j)
		{
			if(list->base[j] > list->base[j+1])
			{
				ElemType tmp = list->base[j];
				list->base[j] = list->base[j+1];
				list->base[j+1] = tmp;
			}
		}
	}

}
//反转
void resver(SeqList *list)
{
    if(list->size==0 || list->size==1)
    {
        return;
    }

	int low = 0;
	int high = list->size-1;
	ElemType tmp;
	while(low < high)
	{
		tmp = list->base[low];
		list->base[low] = list->base[high];
		list->base[high] = tmp;

		low++;
		high--;
	}

}
//清除
void clear(SeqList *list)
{
    list->size=0;

}
//销毁
void destroy(SeqList *list)
{
    free(list->base);
	list->base = NULL;
	list->capacity = 0;
	list->size = 0;

}
//合并线性表
void merge(SeqList *list1,SeqList *list2,SeqList *list_merge)
{
    list_merge->capacity = list1->size + list2->size;
	list_merge->base = (ElemType*)malloc(sizeof(ElemType)*list_merge->capacity);
	assert(list_merge->base != NULL);

	int ia = 0;
	int ib = 0;
	int ic = 0;

	while(ia<list1->size && ib<list2->size)
	{
		if(list1->base[ia] < list2->base[ib])
			list_merge->base[ic++] = list1->base[ia++];
		else
			list_merge->base[ic++] = list2->base[ib++];
	}
	
	while(ia < list1->size)
	{
		list_merge->base[ic++] = list1->base[ia++];
	}
	while(ib < list2->size)
	{
		list_merge->base[ic++] = list2->base[ib++];
	}

	list_merge->size = list1->size + list2->size;

}
void show_list(SeqList *list)
{
    for(int i = 0; i<list->size;++i)
    {
        printf("%d  ",list->base[i]);
    }
    printf("\n");

}
