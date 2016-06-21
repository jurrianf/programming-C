#include <stdio.h>
#include <stdbool.h>
int getal = 0;
int i = 0;
int array[10] = {1,2,3,4,5,6,1,2,3,4};
int array2[10] = {1,2,3,4,5,6,1,2,3,4};
int array3[10] = {1,2,3,4,5,5,1,2,3,4};

bool equal_rows(int a1[], int a2[], int size){

	for(i = 0; i < size; i++){
		if(a1[i] != a2[i])
			return false;
	}
	return true;
}

 int main(void) {
	if(equal_rows(array, array2, 10) == true)
	{
		printf("Gelijk");
	} else {
		printf("Ongelijk");
	}
	if(equal_rows(array, array3, 10) == true)
	{
		printf("Gelijk");
	} else {
		printf("Ongelijk");
	}
}