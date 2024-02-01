#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>


int main () {
int pelaajanarvaus[7], oikeatnumerot[7];
bool samanro = false;
printf ("\nTervetuloa lottoarvontaan!\n");


//Pyydä pelaajalta 7 numero välillä 1-40 ja ota ne talteen 
printf("\nAnna 7 numeroa välillä 1-40\n");

    for (int i = 0; i < 7; i++) {
        do {
            printf("Anna numero %d: ", i + 1);

            // Varmista että syöte on oikean tyyppinen
            if (scanf("%d", &pelaajanarvaus[i]) != 1) {
                printf("Virheellinen syöte. Anna uusi arvaus.\n");
                // Puhdista syötepuskuri
                while (getchar() != '\n'); 
                continue;
            }

            // Tarkista onko numero sallituissa rajoiss 1-40
            if (pelaajanarvaus[i] > 40 || pelaajanarvaus[i] <= 0) {
                printf("Antamasi numero %d oli virheellinen! Anna uusi arvaus.\n", pelaajanarvaus[i]);
                continue;
            }

            // Tarkista ettei pelaaja ole antanut samaa numeroa aiemmin
            samanro = false;

            for (int j = 0; j < i; j++) {
                if (pelaajanarvaus[i] == pelaajanarvaus[j]) {
                    samanro = true;
                    printf("Antamasi numero on jo syötetty! Anna uusi arvaus.\n");
                    break;
                }
            }

        // Toista kunnes saadaan kelvollinen numero
        } while (samanro); 

        
    }
    // Tulosta pelaajan antamat numerot

    printf("\nPelaajan antamat numerot: ");
    for (int i = 0; i < 7; i++) 
    {
        printf("%d ", pelaajanarvaus[i]);
    }



//alusta satunnaislukugeneraattori  

srand(time(NULL));

printf ("\nLoton tämän viikon oikeat numerot ovat: ");

//Kone arpoo 7 numeroa ja tulostaa ne
for (int i = 0; i < 7; i++)
{
    oikeatnumerot[i] = rand() % 40 + 1;
    printf("%d, ", oikeatnumerot[i]);
}


//Vertaa koneen arpomia numeroita pelaajan antamiin
//tulosta pelaajan oikein arvatut numerot

printf ("\nSinulla oli seuraavat numeot oikein: ");
for (int i = 0; i < sizeof(pelaajanarvaus) / sizeof(pelaajanarvaus[0]); i++) 
{
        for (int j = 0; j < sizeof(oikeatnumerot) / sizeof(oikeatnumerot[0]); j++) 
        {
            if (pelaajanarvaus[i] == oikeatnumerot[j]) 
            {
                printf("%d, ", pelaajanarvaus[i]);
                break; 
            }
        }
}
    printf("\n");



    return 0;
}