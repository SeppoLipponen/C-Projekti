#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void executeGame(const char *gameName);

int main() {
    int valinta;
    // Muuttuja, joka määrittää jatketaanko peliä
    int jatka = 1; 

    while (jatka) {
        printf("Tervetuloa pelisivustolle!\n");
        printf("Valitse peli:\n");
        printf("1. Lotto\n");
        printf("2. Numeronarvauspeli\n");
        printf("3. Ksp\n");
        printf("0. Lopeta\n");
        printf("Valintasi: ");
        scanf("%d", &valinta);

        switch (valinta) {
            case 0:
                printf("Kiitos pelaamisesta!\n");
                // Asetetaan jatka-muuttuja 0:ksi jotta silmukka päättyy
                jatka = 0; 
                break;
            case 1:
                executeGame("lotto");
                break;
            case 2:
                executeGame("ArvaaNumero");
                case 3:
                executeGame("Ksp");
                break;
            default:
                printf("Virheellinen valinta. Valitse 1, 2 tai 0.\n");
                break;
        }
    }

    return 0;
}

void executeGame(const char *gameName) {
    char command[100];
    sprintf(command, "%s.exe", gameName);
    printf("Käynnistetään peli...\n");
    system(command);
}

