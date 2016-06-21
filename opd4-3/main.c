#include <stdio.h>

int c;

void compress (const char* filename1, const char * filename2){
	FILE* out_file;
	FILE* in_file;
	out_file = fopen(filename1, "rb");
	in_file = fopen(filename2, "w");
	while (c != EOF){
		c = fgetc(out_file);
		if (c == ' ' || c == '\n' || c == '\r' || c == EOF) {
			printf("skip ");
		}
		else {
		fputc(c, in_file);
		}
	}
	fflush(out_file);
	fflush(in_file);
	fclose(out_file);
	fclose(in_file);
}

int main(int argc, char* argv[]) {
	compress("output4.txt", "output5.txt");	
	return 0;
}