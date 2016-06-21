#include <stdio.h>
int getal = 0;
int i = 0;
int array[10] = {1,2,3,4,5,2,4,2,6,7};

int count(int a[], int size, int n){
	for(i = 0; i < size; i++){
		if(a[i] == n){
			getal += 1;
		}
	}
	return getal;
}

 int main(void) {

	printf("%d",count(array, 10, 2));
}