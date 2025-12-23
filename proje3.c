//ELA NAZ HAFİZ 252104013
//3.soru
#include <stdio.h>

int asal(int sayi) {
    if (sayi < 2)
        return 0;
    for (int i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0)
            return 0;
    }
return 1;
}
int main() {
char bir, iki;
int toplam;
int sayac = 0;
printf("Gecerli Isimler:\n");

for (bir = 'a'; bir <= 'z'; bir++) {
for (iki = 'a'; iki <= 'z'; iki++) {
            
int birUnlu = (bir == 'a' || bir == 'e' || bir == 'i' || bir == 'o' || bir == 'u');
int ikiUnlu = (iki == 'a' || iki == 'e' || iki == 'i' || iki == 'o' || iki == 'u');

if (birUnlu != ikiUnlu) {
toplam = bir + iki + bir;

if (asal(toplam)) {
sayac++;
printf("%d. %c%c%c\n", sayac, bir, iki, bir);
 }
  }
    }
     }

printf("\nGecerli olan isim sayisi toplami: %d\n", sayac);

    return 0;
}