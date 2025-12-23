//ELA NAZ HAFİZ 252104013
//4.Soru
#include <stdio.h>

int main() {
    char mesaj[100];
    int anahtar, i, sec;

    printf("1 - Sifrele\n2 - Coz\nSeciniz: ");
    scanf("%d", &sec);
    
    printf("Mesaji girin: ");
    scanf(" %[^\n]", mesaj);

    printf("Anahtar degeri: ");
    scanf("%d", &anahtar);

    if (sec == 2) {
        anahtar = -anahtar;
    }

    for (i = 0; mesaj[i] != '\0'; i++) {
        char c = mesaj[i];

        if (c >= 'a' && c <= 'z') {
            c = c + (anahtar % 26);
            if (c > 'z') c = c - 26;
            if (c < 'a') c = c + 26;
        } 
        else if (c >= 'A' && c <= 'Z') {
            c = c + (anahtar % 26);
            if (c > 'Z') c = c - 26;
            if (c < 'A') c = c + 26;
        }
        
        mesaj[i] = c;
    }

    printf("Sonuc: %s\n", mesaj);

    return 0;
}