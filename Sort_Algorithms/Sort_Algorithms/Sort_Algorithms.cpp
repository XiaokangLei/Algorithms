// Sort_Algorithms.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#include "Insertion_Sort.h"

#define random(x) (rand()%x)
int main()
{
	int origin[NUM],sort[NUM];
	srand((int)time(0));
	for (int x = 0; x < NUM; x++) {
		origin[x] = random(1000);
	}
	printf("Orgin:\n");
	for (int j = 0; j < NUM; j++) {
		printf("%d,", origin[j]);
	}
	printf("\n");
	//��������
	Insertion_Sort(origin, sort);

	system("pause");
    return 0;
}

