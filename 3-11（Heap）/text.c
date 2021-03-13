#include"Heap.h"

int main()
{
	Heap hp;
	int a[10] = { 22,34,55,66,11,23,45,66,78,43 };
	HeapCreate(&hp,a, 10);

	HeapPrint(a, 10);

	HeapSort(a, 10);
	HeapPrint(a, 10);

	return 0;
}