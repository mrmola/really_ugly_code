#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char desiredString[1000] = "\n       000000000\n     00         00\n    0      I      0\n    0   Changed   0\n    0     The     0\n     00  World  00\n       000000000\0";
void main() {
    printf("sus");
    char* finalString[10000];
    finalString[0] = '\0';
    int currentIndex = 0;
    printf("bruh");
            printf("%c", finalString[0]);
    while(currentIndex < strlen(desiredString)) {
        char dataSource[10000];
        for(int i = 0; i < 10000; i++) {
            printf("%d",  (int) finalString[i]);
            if(desiredString[currentIndex]==dataSource[i]) {
                finalString[currentIndex] = dataSource+i;
                printf("Found %d", i);
                currentIndex++;
            }
        }
    }
    for(int i = 0; i < currentIndex; i++) {
        printf("%c", finalString[i][0]);
    }
}