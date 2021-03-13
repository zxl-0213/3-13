#include"Heap.h"

void HeapCreate(Heap* hp,HpDataType* a, int n)
{
	
	hp->a = (HpDataType*)malloc(sizeof(HpDataType)*n);
	if (hp->a == NULL)
		exit(-1);
	memcpy(hp->a,a,sizeof(HpDataType)*n);
	hp->size = n;
	hp->capacity = n;

	//建堆
	for (int root = (n - 2) / 2; root >= 0; root--)
	{
		AdjustDown(a, n, root);
		
	}
	 
}

//向下调整算法
void AdjustDown(HpDataType* a, int n, int root)
{
	int parent = root;
	int child = 2 * root + 1;
	while (child<n)
	{
		if (child+1 < n && a[child] > a[child + 1])   //找出小的孩子
		{
			child++;
		}
		if (a[parent] > a[child])
		{
			int temp = a[child];
			a[child] = a[parent];
			a[parent] = temp;
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPrint(HpDataType* a,int n)
{
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

/*void HearPush(Heap* hp, HpDataType x) 
{
	if (hp->size == hp->capacity)
	{
		int capacity = hp->capacity * 2;
		hp->a=(HpDataType*)realloc(hp->a,sizeof(HpDataType) * capacity);
		if (hp->a == NULL)
		{
			exit(-1);
		}
	}
	hp->a[hp->size] = x;
	hp->size++;
	AdjustUp(hp->a, hp->size-1);
}

void AdjustUp(HpDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child>0)
	{
		if (a[child] < a[parent])
		{
			int temp = a[child];
			a[child] = a[parent];
			a[child] = temp;
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


void HeapPop(Heap* hp)
{
	int temp = hp->a[0];
	hp->a[0] = hp->a[hp->size - 1];
	hp->a[hp->size - 1] = temp;
	hp->size--;
	AdjustDown(&hp->a, hp->size, 0);
}*/



//降序
void HeapSort(int* a, int n)
{
	int end = n - 1;
	while (end>0)
	{
		int temp = a[end];
		a[end] = a[0];
		a[0] = temp;
		AdjustDown(a,end,0);
		end--;
	}
}
