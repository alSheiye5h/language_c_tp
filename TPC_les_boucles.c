#include <stdio.h>
#include <stdlib.h>




void main() {
    // 7ayed commentaire dial l'exercice li bghiti it executa
    // ex1();
    // ex2();
    // ex3();
    // ex4();
    // ex5();
    // ex6();
}

void ex6() {
    int n, i, j;
    do {
        printf("entrez n :\n");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 1; i <= n;i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

void ex5() {
    int range, i, somme = 0;
    do {
        printf("entrez l'interval de 1 jusqu'a ? : ");
        scanf("%d", &range);
    } while (range <= 1);
    
    for (i = 1; i < range; i++ ) {
        if (range % i == 0) {
            somme += i;
        }
    }
    if (somme == range) {
        printf("%d est un nombre parfait !\n", range);
    } else {
        printf("%d n'est pas un nombre parfait !\n", range);
    }
}

void ex4() {
    int n, divs = 0;

    printf("entrez un nombre :\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d n'est pas un nombre premier\n", n);
        return;  
    }

    for (int i = 2; i < n; i++) {  
        if (n % i == 0) { 
            divs++;
            break; 
        }
    }
    printf("%d\n", divs);
    if (divs != 0) {
        printf("%d n'est pas un nombre premier\n", n);
    } else {
        printf("%d est un nombre premier\n", n);
    }
}

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