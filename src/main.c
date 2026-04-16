#include <stdio.h>
#include "operations.c"
#include <stdlib.h>
//#include <SDL2/SDL.h>


int main(int argc, char *argv[]) {
    char Premier[10];
    char Second[10];
    char choix[5];
    int premier, second;
    printf("| -----------Bonjour------------ |\n");
    printf("| ---------Calcatrice:---------- |\n");
    printf("| 1- additionner --------------- |\n");
    printf("| 2- soustraire ---------------- |\n");
    printf("| 3- multiplier ---------------- |\n");
    printf("| 4- diviser ------------------- |\n");
    printf("| 5- moduler ------------------- |\n");
    printf("| 6- mettre a à la puissance n - |\n");
    printf("| 7- racine carré -------------- |\n");
    printf("| Que comptez vous faire: ");
    fgets(choix, 5, stdin);
    int n = strtol(choix, NULL, 10);
    switch (n){
        case 1:
            printf("Entrez votre premier entier: ");
            fgets(Premier, 10, stdin);
            premier = strtol(Premier, NULL, 10);
            printf("Entrez votre second entier");
            fgets(Second, 10, stdin);
            second = strtol(Second, NULL, 10);
            printf("resultat = %d", add(premier, second));
        case 2:
            printf("Entrez votre premier entier: ");
            fgets(Premier, 10, stdin);
            premier = strtol(Premier, NULL, 10);
            printf("Entrez votre second entier");
            fgets(Second, 10, stdin);
            second = strtol(Second, NULL, 10);
            printf("resultat = %d", sub(premier, second));
        case 3:
            printf("Entrez votre premier entier: ");
            fgets(Premier, 10, stdin);
            premier = strtol(Premier, NULL, 10);
            printf("Entrez votre second entier");
            fgets(Second, 10, stdin);
            second = strtol(Second, NULL, 10);
            printf("resultat = %d", mul(premier, second));
        case 4:
            printf("Entrez votre premier entier: ");
            fgets(Premier, 10, stdin);
            premier = strtol(Premier, NULL, 10);
            printf("Entrez votre second entier");
            fgets(Second, 10, stdin);
            second = strtol(Second, NULL, 10);
            printf("resultat = %d", divi(premier, second));
        case 5:
            printf("Entrez votre premier entier: ");
            fgets(Premier, 10, stdin);
            premier = strtol(Premier, NULL, 10);
            printf("Entrez votre second entier");
            fgets(Second, 10, stdin);
            second = strtol(Second, NULL, 10);
            printf("resultat = %d", mod(premier, second));
        case 6:
            printf("Entrez votre premier entier: ");
            fgets(Premier, 10, stdin);
            premier = strtol(Premier, NULL, 10);
            printf("Entrez votre second entier");
            fgets(Second, 10, stdin);
            second = strtol(Second, NULL, 10);
            printf("resultat = %d", sq(premier, second));
        case 7:
            printf("Entrez votre entier: ");
            fgets(Premier, 10, stdin);
            premier = strtol(Premier, NULL, 10);
            printf("resultat = %.15f", sqroot(premier));
        default:
            printf("Cette fonction n'existe pas ou vous n'avez rien rempli");
            break;
    }

    return 0;
}