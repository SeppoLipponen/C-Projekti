#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valinta, koneenvalinta;

int main(){
    //Tervetuloa
    printf("Tervetuloa Kivi Sakset Paperi peliin! \n");

    //Pyydä pelaajaa valitsemaan kivi sakset tai paperi
    printf("Ole hyvä ja tee valinta\n1: Kivi\n2: Sakset\n3: Paperi\n");
    scanf("%d", &valinta);

    if (valinta == 1) {
        printf("Valitsit: kiven\n");
    } else if (valinta == 2) {
        printf("Valitsit: Sakset\n");
    } else {
        printf("Valitsit: Paperin\n");
    }




    // Alusta satunnaislukugeneraattori
    srand(time(NULL));

    koneenvalinta = rand() % 3 + 1;

    if (koneenvalinta == 1) {
        printf("Vastustaja valitsi: kiven\n");
    } else if (koneenvalinta == 2) {
        printf("Vastustaja valitsi: Sakset\n");
    } else {
        printf("Vastustaja valitsi: Paperin\n");
    }

     if (valinta == koneenvalinta) {
        printf("Tasapeli!\n");
    } else if ((valinta == 1 && koneenvalinta == 2) || 
               (valinta == 2 && koneenvalinta == 3) ||
               (valinta == 3 && koneenvalinta == 1)) {
        printf("Sina voitit!!!\n");
    } else {
        printf("Sina havisit!\n");
    }

    return 0;
}