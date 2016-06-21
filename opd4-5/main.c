#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int counter = 0;
int i = 0;
int buffer;
int word_size = 0;

int getWords(char* filename, int word_size, char a[][word_size]){
    FILE* f = fopen(filename, "r");
    
    buffer = fgetc(f);
    char temp[word_size];
    memset(temp, 0, (size_t) word_size);
    while(buffer != EOF) {
        if(isalpha(buffer) != 0) {
            char c = buffer;
            strncat(temp, &c, 1);
        } else if((buffer == 10 || buffer == 32)) {
            if(strlen(temp) > 0) {
                strcpy(a[counter], temp);
                strcpy(temp, "");
                counter++;
            }
        }
        buffer = fgetc(f);
    }
    if(strlen(temp) > 0) {
        strcat(a[counter], temp);
        strcpy(temp, "");
        counter++;
    }
    return counter;
}


int main(void) {
    char* filename = "woorden.txt";
	buffer = 0;
    char temp[1000] = "";
    FILE* f = fopen(filename, "r");
    buffer = fgetc(f);
    while(buffer != EOF) {
        if(isalpha(buffer) != 0) {
            char c = buffer;
            strncat(temp, &c, 1);
        } else {
            int temp_word_size = strlen(temp);
            if(word_size < temp_word_size) {
                word_size = temp_word_size;
            }
            strcpy(temp, "");
        }
        buffer = fgetc(f);
    }
    // lees de hele file voor het bepalen van de lengte van het langste woord
    char a[1000][word_size];
    int n = getWords("woorden.txt", word_size, a);
    if (n > 0){
        puts("gevonden woorden:");
        for (i = 0;i < n; i++){
            printf("%3d %s\n",i,a[i]);
        }
    }

    return EXIT_SUCCESS;
}
