#include <stdio.h>

int c;
int getal = 0;
int getal2 = 0;
int getal3 = 0;

void read(const char filenaam[40], int size){
	char matrix[size][size];
	FILE* out_file;
	const char* filename = filenaam;
	out_file = fopen(filename, "r");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; i < size; j++)
		{
		c = fgetc(out_file);
		matrix[i][j] = c;
		printf("%c", matrix[i][j]);
		}
		printf("\n");
	}
	fclose(out_file);
}

int main(void) {
	char ch;
	FILE* in_file;
	const char* filename = "output3.txt";
	in_file = fopen(filename, "r");
	while (getal == 0){
		ch = fgetc(in_file);
		printf("%c", ch);
		if (ch == EOF) {
			printf("\nEOF");
			getal = 2;
		}
		else if (ch != EOF && ch != '1' && ch != '0' && ch != '-' && ch !='\n'){
			printf("Incorrect input");
			printf("(%d)", ch);
			getal = 1;
		}
		else {
			if (ch == '\n' && getal3 == 0){
			getal2++;
			}
			else {
				getal3 = 1;
			}
		}
	}
	fclose(in_file);
	if(getal ==  2)
		read(filename, getal2);
	return 0;
}