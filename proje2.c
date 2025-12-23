//ELA NAZ HAFİZ 252104013
//2.soru
#include <stdio.h>
int ucgen(int n) 
{
    if (n <= 0) return 0;
    return n + ucgen(n - 1);
}
void diziy(int n) {
    if (n <= 0) return;
    diziy(n - 1);
    printf("%d ", ucgen(n));
}
int main() {
    int i, j, n;
    int sayac = 1;
    printf("Bir tam sayi girin: ");
    scanf("%d", &n);

    printf("N=%d ucgen sayilar= ", n);
    diziy(n);
    printf("\n\n");

    int toplamsayi = (n * (n + 1)) / 2;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            if (sayac <= toplamsayi) {
                printf("%d ", sayac);
                sayac++;
            }
        }
        printf("\n");
    }
    return 0;
}