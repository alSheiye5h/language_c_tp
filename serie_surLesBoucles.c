#include <stdio.h>
#include <stdlib.h>


int main() {
    
}


int ex2() {
    int nombre, nombre1, max = 0, min = 9, nChfr = 0, nChfrPair = 0, nChfrImpair = 0, palindrome = 0, reste;

    do {
        printf("entrez un nombre :\n");
        scanf("%d", &nombre);
    } while (nombre <= 0);

    nombre1 = nombre;

    do {
        reste = nombre % 10;
        max = (reste > max) ? nombre % 10 : max ;
        min = (reste < min) ? nombre % 10 : min ;

        nChfr++;

        if (nombre % 2 == 0) 
            nChfrPair++;
        else 
            nChfrImpair++;

        palindrome = palindrome * 10 + reste;
        nombre /= 10;

    } while (nombre != 0);

    printf("le chiffre le plus grand est : %d\n", max);
    printf("le chiffre le plus petit est : %d\n", min);
    printf("le nombre de chiffre est : %d\n", nChfr);
    printf("le nombre de chiffre Pair est : %d\n", nChfrPair);
    printf("le nombre de chiffre Impair est : %d\n", nChfrImpair);
    if (palindrome == nombre1) 
        printf("le nombre est palindrome\n");
    else 
        printf("le nombre n'est pas palindrome\n");
}



int ex1() {
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