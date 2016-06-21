#include <stdio.h>

int main(void) {
	FILE* file1;
	FILE* file2;
	
	int ch1, ch2;
	int getal = 0;
	int getal2 = 0;
	
	const char* filename1 = "file1.txt";
	const char* filename2 = "file2.txt";
	
	out1 = fopen(filename1, "r");
	out2 = fopen(filename2, "r");

	ch1 = fgetc(file1);
	ch2 = fgetc(file2);
	
	while (getal2 == 0 && ch1 != -1 && ch2 != -1 && ch1 == ch2) {
		if (ch1 == ch2){
			ch1 = fgetc(file1);
			ch2 = fgetc(file2);
			getal++;
		}
	}
	if (ch1 != ch2){
		printf("file's zijn anders op punt %d ", getal);
		getal2 = 1;
	}
	else if (ch1 != -1 && ch2 != -1) {
		printf("einde van het document");
		printf("identieke file's");
		getal2 = 1;
	}

		fclose(out1);
		fclose(out2);
	return 0;
}