#include <stdio.h>
#include <stdlib.h>

void ex3() {
    float a, b, c;

    printf("entrez a, b, c :\n");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && c + b > a) {
        if (a == b && b == c) {
            printf("equilateral");
        } else if (a == b || b == c || a == c) {
            printf("isocele");
        } else {
            printf("aucun cote egal");
        }
    } else {
        printf("abc n'est pas un trianle");
    }
}



void ex2() {
    float amount, converted;
    char  choix;

    printf("entrez le montant en euro puis le devise :\n");
    scanf("%f %c", &amount, &choix);

    switch (choix) {
        case 'D':
        case 'd': 
            converted = amount * 5;
            break;
        case 'P':
        case 'p':
            converted = amount * 0.85;
            break;
        case 'U':
        case 'u':
            converted = amount * 1.1;
            break;
        default:
            printf("error");
            return;
    }
    printf("resultat: %.2f", converted);
}


void ex1() {
    float poids, taille, imc;

    printf("entrez votre poids puis votre taille :\n");
    scanf("%f%f", &poids, &taille);

    imc = poids / (taille * taille);

    if (imc < 18.5) {
        printf("sous poids");
    } else if (imc < 25) {
        printf("poids normal");
    } else {
        printf("surpoids");
    }
}