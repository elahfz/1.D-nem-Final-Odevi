//ELA NAZ HAFİZ 252104013
//1.soru
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cirolar[12];
    int i, j;
    srand(time(NULL));
    printf("Uretilen aylik ciro verileri (1K cinsinden) \n");
    for (i = 0; i < 12; i++) {
        cirolar[i] = (rand() % 10) + 1;
        printf("%d. Ay: %dK\n", i + 1, cirolar[i]);
    }

    printf("\n Yatay Bar Grafigi \n");

    for (i = 0; i < 12; i++) {
        
        printf("%2d. : ", i + 1);

        for (j = 0; j < cirolar[i]; j++) {
            printf(" * ");
        }

        printf("\n");
        
    }
    printf("\nDikey bar girafigi\n");
    for (i = 10; i >= 1; i--) { 
        for (j = 0; j < 12; j++) { 
            if (cirolar[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
        
    }
    for (i = 1; i <= 12; i++) {
        printf("%-2d", i);
    }
    printf("\n");

    return 0;
}