// BinarySearch.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

ElementType BinarySearch(ElementType DataSet[], int Size, ElementType Target)
{
	int Left, Right, Mid;

	Left = 0;
	Right = Size - 1;

	while (Left <= Right)
	{
		Mid = (Left + Right) / 2;

		if (Target == DataSet[Mid])
			return DataSet[Mid];
		else if (Target > DataSet[Mid])
			Left = Mid + 1;
		else
			Right = Mid - 1;
	}

	return NULL;
}

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

