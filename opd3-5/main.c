#include <stdio.h>
unsigned char bits[8];
char ch1[10];

int get_bit(char ch, int n){
	for (int i = 0; i < 8; i++)
	{
		bits[i] = (ch >> i) & 1;
	}
	printf("%d\n", bits[n] = (ch >> n) & 1);
	return 0;
}

char verschuif_cyclisch(char ch2, int n){
	printf("This is character: %c \n", ch2);
	printf("%d times\n", n);
	for (int i = 0; i < 8; i++)
	{
		bits[i] = (ch2 >> i) & 1;
		printf("%d", bits[i]);
	}
	printf("\n");
	if (n > 0) {
		for (int i = 0; i < n; i++){
			if (ch2 & 0x80) {
				ch2 <<= 1;
				ch2 |= 0x01;
			}
			else{
				ch2 <<= 1;
			}
		}
	}
	else if (n < 0) {
		for (int i = 0; n < i; i--) {
			if (ch2 & 0x01) {
				ch2 >>= 1;
				ch2 |= 0x80;
			}
			else {
				ch2 >>= 1;
			}
		}
	}
	for (int i = 0; i < 8; i++)
	{
		bits[i] = (ch2 >> i) & 1;
		printf("%d", bits[i]);
	}
	return 0;
}

int main(void) {
	get_bit('a', 1);
	verschuif_cyclisch('d', 2);
	return 0;
}