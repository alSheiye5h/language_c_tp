#include <stdio.h>
#include <stdlib.h>

int main() {
    float note, somme = 0, moyenne, min = 20, max = 0;
    char continu;

    do {
        printf("entrez la note :\n")
        scanf("%f", note);

        somme += note;
        if (note < min) {
            min = note;
        }
        if (note > max) {
            max = note;
        }

        printf("voulais vous continuer ? :\n");
    } while (continu == 'O' || continu == 'o');
}