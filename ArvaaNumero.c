#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arvottuNumero, pelaajanArvaus, yritykset = 0;

    // Aseta satunnaislukugeneraattori eri tavalla joka kerta
    srand(time(NULL));

    // Arvo satunnainen numero väliltä 1-100
    arvottuNumero = rand() % 100 + 1;

    printf("Tervetuloa Arvaa Numero -peliin!\n");
    printf("Arvaa numero väliltä 1-100.\n");

    //Pyydä pelaajalta arvaus
    do {
        printf("Syötä arvauksesi: ");
        scanf("%d", &pelaajanArvaus);
        yritykset++;
    
    //Anna pelaajalle ohjeita arvauksen oikeeellisuudesta
        if (pelaajanArvaus > arvottuNumero) {
            printf("Liian suuri! Yritä uudelleen.\n");
        } else if (pelaajanArvaus < arvottuNumero) {
            printf("Liian pieni! Yritä uudelleen.\n");
        } else {
            printf("\nOnneksi olkoon! Arvasit oikein numero %d \n%d. yrityksellä.\n", arvottuNumero, yritykset);
        }
    } while (pelaajanArvaus != arvottuNumero);

    return 0;
}
