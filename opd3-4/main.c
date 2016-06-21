#include <stdio.h>

	int matrix[][3] = {{1,1,1},{2,2,2},{3,3,3}};
	int size = 3;
	int i = 0;
	int j = 0;
	
void transpose_matrix(int size, int matrix[][size]){
	for (j = 0; j < size; j++){
		for (i = 0; i < size; i++)
		{
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	transpose_matrix(size, matrix);
	return 0;
}