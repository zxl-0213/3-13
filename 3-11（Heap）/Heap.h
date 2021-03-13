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

//��ʼ��
void HeapCreate(Heap* hp,HpDataType* a, int n);

//���µ���
void AdjustDown(HpDataType* a,int n,int root);

//��ӡ
void HeapPrint(HpDataType* a, int n);

//����
void HearPush(Heap* hp, HpDataType x);

//ɾ��
void HeapPop(Heap* hp);

//����
void HeapSort(int* a, int n);


