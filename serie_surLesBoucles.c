#include <stdio.h>
#include <stdlib.h>

int main() {
    float note, somme = 0, moyenne, min = 20, max = 0, noteCompteur = 0;
    char continu;

    do {
        printf("entrez la note :\n");
        scanf("%f", &note);

        noteCompteur++;
        somme += note;
        
        if (note < min) {
            min = note;
        }
        if (note > max) {
            max = note;
        }

        do {
            printf("voulais vous continuer ? (O/N) :\n");
            scanf(" %c", &continu);
        } while (continu != 'O' && continu != 'o' && continu != 'N' && continu != 'n');
        
    } while (continu == 'O' || continu == 'o');

    moyenne = somme / noteCompteur;

    printf("moyenne est : %.2f\n", moyenne);
    printf("la note maximal est : %.2f\n", max);
    printf("la note minimal est : %.2f\n", min);
}