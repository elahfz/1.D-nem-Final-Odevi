//Ela Naz HAFİZ 252104013
//5.Soru
#include <stdio.h>
#include <stdlib.h>

#define BOYUT 5

int labirent[BOYUT][BOYUT] = {
    {1, 0, 1, 1, 1},
    {1, 0, 1, 0, 1},
    {1, 1, 1, 0, 1},
    {0, 0, 1, 1, 1},
    {1, 1, 1, 0, 1}
};
int yol[BOYUT][BOYUT] = {0};
int cozum(int x, int y) {
    if (x == BOYUT - 1 && y == BOYUT - 1) {
        yol[x][y] = 1;
        return 1;
    }
    if (x >= 0 && x < BOYUT && y >= 0 && y < BOYUT && labirent[x][y] == 1 && yol[x][y] == 0) {
        yol[x][y] = 1;
        if (cozum(x + 1, y)) return 1;
        if (cozum(x, y + 1)) return 1;
        if (cozum(x - 1, y)) return 1;
        if (cozum(x, y - 1)) return 1;

        yol[x][y] = 0;
        return 0;
    }
    return 0;
}

int main() {
    if (cozum(0, 0)) {
        printf("Cikis yolu bulundu:\n");
        int i, j;
        for (i = 0; i < BOYUT; i++) {
        for (j = 0; j < BOYUT; j++) {
     printf("%d ", yol[i][j]);
       }
       printf("\n");
        }
    } else {
        printf("Yol bulunamadi!\n");
    }
    return 0;
}
