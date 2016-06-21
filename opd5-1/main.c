#include <stdio.h>
#include <stdbool.h>
#define ARRAYSIZE 10

bool is_sorted(int a[], int size)
{
	bool test = 1;
	
	if (size <= 1)
	{
		if (test == 1){printf("] size == 1\n");}
		return true;
	}

	if (size == 2)
	{
		if (test == 1){printf("size == 2\n");}
		if(a[0] <= a[1]){
		return true;
		}
		else{return false;}
	}
	if (size > 2){
		if (test == 1){printf("Hoi de waarden zijn %d en %d \n" ,a[size-2],a[size-1]);}
		if (a[size-2]>=a[size-1]){
			return false;
		}
		else{
			if (test == 1){printf("plek %d was correct! nu de volgende!" ,size);}
			size--;
			is_sorted(a,size);
		}
}
}
int main(void) {
	int b[ARRAYSIZE] = {1, 2, 3, 4, 5, 6, 7, 1, 9 ,10};
	bool c = is_sorted(b,ARRAYSIZE);
	if (c == true)
	{
		printf("Al gesorteerd");
	}
	else
	{
		printf("Niet gesorteerd");
	}
	return 0;
}