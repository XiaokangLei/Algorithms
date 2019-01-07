// Insertion_Sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Insertion_Sort.h"

void Insertion_Sort(int *origin,int *sort)
{
	int key, k;
	for (int i = 1; i < NUM; i++) {
		key = origin[i];
		k = i - 1;
		while (k >= 0 && origin[k] > key) {
			origin[k + 1] = origin[k];
			k = k - 1;
		}
		origin[k + 1] = key;
	}
	printf("Insertion_Sort:\n");
	for (int j = 0; j < NUM; j++) {
		sort[j] = origin[j];
		printf("%d,", origin[j]);
	}
	return ;
}

