#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAYSIZE 100000
#define test 1
void insertion_sort(int a[], int size)
{
	if (test == 0){printf("inserting=!");}
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
	if (test == 0){printf("merging.");}
	if (low < high) {
		int mid = (high+low)/2;
		
		merge_sort(a, low, mid);
		merge_sort(a, mid+1, high);
		
		int x[mid - low + 1];
		int i;
		for (i= 0; i <= mid - low; i++)
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
		if (test == 0){printf("break 1st loop");}
	while (y <= mid-low)
		{
		a[w] = x[y];
		y++;
		w++;
		}
		
	}
}

int main(void) {
	int v1[ARRAYSIZE];
	int v2[ARRAYSIZE];
	int i;
	if (test == 0){printf("making random numbers \n");}
	for (i = 0; i < ARRAYSIZE; i ++)
	{
		v1[i] = rand() % 10 + 1;
	}
	for (i = 0; i < ARRAYSIZE; i ++)
	{
		v2[i] = rand() % 10 + 1;
	}
	if (test == 0){printf("Done! with that now lets merge and Insert! \n");}
	clock_t start = clock(), diff, diff2;
	printf("merging... \n");
	merge_sort(v2, 0, ARRAYSIZE);
	diff = clock() - start;
	int msec = diff * 1000 / CLOCKS_PER_SEC;
	printf("Time taken for merge: %d seconds and %d milliseconds \n", msec/1000, msec%1000);
	printf("inserting... \n");
	insertion_sort(v1, ARRAYSIZE);
	diff2 = clock() - start;
	int msec2 = diff2 * 1000 / CLOCKS_PER_SEC;
	int both = msec2 + msec;
	printf("Time taken for sort: %d seconds and %d milliseconds\n", msec2/1000, msec2%1000);
	printf("It took in total, %d  Seconds and %d milliseconds\n", both/1000, both%1000);
	return 0;
}