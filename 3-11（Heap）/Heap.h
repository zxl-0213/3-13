#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int HpDataType;
typedef struct Heap
{
	HpDataType* a;
	int size;
	int capacity;
}Heap;

//初始化
void HeapCreate(Heap* hp,HpDataType* a, int n);

//向下调整
void AdjustDown(HpDataType* a,int n,int root);

//打印
void HeapPrint(HpDataType* a, int n);

//插入
void HearPush(Heap* hp, HpDataType x);

//删除
void HeapPop(Heap* hp);

//排序
void HeapSort(int* a, int n);


