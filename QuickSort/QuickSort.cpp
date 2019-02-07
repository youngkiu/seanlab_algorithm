// QuickSort.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

void Swap(int *A, int *B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}

int Partition(int DataSet[], int Left, int Right)
{
	int First = Left;
	int Pivot = DataSet[First];

	++Left;

	while (1)
	{
		while (DataSet[Left] <= Pivot)
			++Left;

		while (DataSet[Right] > Pivot)
			--Right;

		if (Left >= Right)
			break;

		Swap(&DataSet[Left], &DataSet[Right]);
	}

	Swap(&DataSet[First], &DataSet[Right]);

	return Right;
}

void QuickSort(int DataSet[], int Left, int Right)
{
	if (Left < Right)
	{
		int Index = Partition(DataSet, Left, Right);

		QuickSort(DataSet, Left, Index - 1);
		QuickSort(DataSet, Index + 1, Right);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int DataSet[] = { 5, 1, 6, 4, 8, 3, 7, 9, 2 };
	int Length = sizeof(DataSet) / sizeof(DataSet[0]);
	int i = 0;

	QuickSort(DataSet, 0, Length - 1);

	for (i = 0; i < Length; i++)
	{
		printf("%d ", DataSet[i]);
	}

	printf("\n");

	return 0;
}

