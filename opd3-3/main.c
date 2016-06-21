#include <stdio.h>
#include <stdbool.h>

int balance = 0;
int i;
int nul = 0;
int een = 0;
int array[10] = {1, 0, 1, 0, 1, 0, 0, 1, 1, 0};

bool valid_row(int a[], int size){
	for (i = 0; i < size; i++)
	{
		if (a[i] != 0 && a[i] != 1)
			return false;
			
		if (a[i] == 0)
			balance += 1;
			nul++;
			een = 0;
			
		if (a[i] == 1)
			balance -=1;
			nul = 0;
			een++;
			
		if (nul == 3 || een == 3)
			return false;
	}
	if (balance != 0)
		return false;
	return true;
	}

 int main(void) {
	
	if(valid_row(array, 10) == true){
		printf("Goed");
	}
	else{
		printf("Fout");
	}
}