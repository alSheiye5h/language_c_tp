#include <stdio.h>
#include <stdlib.h>

void ex2() {
    float terme, n;
    int i = 0;
    
    do {
        printf("entrez n :\n");
        scanf("%f", &n);
    } while (n <= 0);

    do {

        terme = 1/(2*n);
        printf("terme %d : %f\n", i, terme);
        n++;
        i++;
    } while (terme >= 0.0001);
}





void ex1() {
    float moyenne, count = 0;
    int n, somme = 0;

    do {
        printf("entrez un nombre: \n");
        scanf("%d", &n);
        somme += n;
        count++;
    } while (n != 0);

    if (count == 0) {
        printf("y'a rien a afficher\n");
    } else {
        moyenne = somme / count;
        printf("%.0f nombres entré, moyenne est de %.2f\n", count, moyenne);
    }
}