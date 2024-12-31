#include <stdio.h>
#include <stdlib.h>

void ex3() {
    float n, max, min, rep_max = 0, rep_min = 0;
    int combien;
    printf("combien de nombres vous allez entrer :\n");
    scanf("%d", &combien);
    for (int i = 0; i < combien; i++) {
        printf("entrez un nombre :\n");
        scanf("%f", &n);
        if (i == 0) {
            max = n;
            min = n;
        } else if (n > max) {
            max = n;
        } else if (n < min) {
            min = n;
        } else if (n == max) {
            rep_max++;
        } else if (n == min) {
            rep_min++;
        }
    }
    printf("le maximum est : %f et repetté %.0f fois\n", max, rep_max);
    printf("le minimum est : %f et repetté %.0f fois\n", min, rep_min);
}











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