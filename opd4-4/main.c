#include <stdio.h>

int b[size];
int getal = 0;
int i = 0;
int n;
int ch;

int getIntegers(const char* filename, int size){
	FILE* out_file;
	out_file = fopen(filename, "rb");
	ch = fgetc(out_file);
	while(ch != EOF && getal <= 100){
		if (ch == '-' || (ch <= 9 && ch >= 1)){
			b[getal] == ch;
			getal++;
		}
	}
	return 0;
}

int main(void) {

	n = getIntegers("getallen.txt", 100);
	if (n > 0) {
		puts("gevonden getallen: ");
		for (i = 0; i < n; i++){
			printf("%d ",a[i]);
		}
	}
	putchar("\n");
	return 0;
}