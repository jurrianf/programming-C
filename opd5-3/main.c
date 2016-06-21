#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 100000
#define test 1
void insertion_sort(int a[], int size)
{
	int p;
	for (p = 0; p < size; p++)
	{
		int z = a[p];
		int j = p;
		while (j > 0 && z < a[j-1])
		{
			a[j] = a[j-1];
			j--;
		}
		a[j] = z;
	}
	
}

void merge_sort(int a[], int low, int high)
{
	int i;
	if (low < high) {
		int mid = (high+low)/2;
		
		merge_sort(a, low, mid);
		merge_sort(a, mid+1, high);
		
		int x[mid - low + 1];
		for (i = 0; i <= mid - low; i++)
		{
			x[i] = a[low+i];
		}
		int y = 0;
		int u = mid+1;
		int w = low;
		
		while (y <= mid - low && u <= high)
		{
			if (x[y] < a[u])
			{
				a[w] = x[y];
				y++;
			}
			else {
				a[w] = a[u];
				u++;
			}
			w++;
		}
	while (y <= mid-low)
		{
		a[w] = x[y];
		y++;
		w++;
		}
	}
}
int compare (const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int main(void) {
	int v1[ARRAYSIZE];
	int v2[ARRAYSIZE];
	int v3[ARRAYSIZE];
	int i;
	for (i = 0; i < ARRAYSIZE; i ++)
	{
		v1[i] = rand() % 10 + 1;
	}
	for (i = 0; i < ARRAYSIZE; i ++)
	{
		v2[i] = rand() % 10 + 1;
	}
	for (i = 0; i < ARRAYSIZE; i ++)
	{
		v3[i] = rand() % 10 + 1;
	}
		printf("sortint...\n");
	qsort (v3, ARRAYSIZE, sizeof(int), compare);
	printf("done sorting!\n");
	printf("mergint.... \n");
	merge_sort(v2, 0, ARRAYSIZE);
	printf("done merging!\n");
		printf("inserting... \n");
	insertion_sort(v1, ARRAYSIZE);
	printf("done with them all!");

	
	
	
	
//	for (int getal = 0; getal < ARRAYSIZE; getal++)
//	{
//		printf("%d ", v2[getal]);
//	}
//	for (int getal2 = 0; getal2 < ARRAYSIZE; getal2++)
//	{
//		printf("%d ", v1[getal2]);
//	}
	
	return 0;
}