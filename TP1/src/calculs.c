#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Demander à l'utilisateur d'entrer les valeurs de num1, num2 et op
    printf("Entrez la première valeur (num1) : ");
    scanf("%d", &num1);
    printf("Entrez la deuxième valeur (num2) : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (op) : ");
    scanf(" %c", &op); // Espace avant %c pour consommer les espaces blancs

    // Utiliser une structure switch pour déterminer l'opération à effectuer
    switch (op) {
        case '+':
            printf("Résultat : %d\n", num1 + num2);
            break;
        case '-':
            printf("Résultat : %d\n", num1 - num2);
            break;
        case '*':
            printf("Résultat : %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Résultat : %d\n", num1 / num2);
            } else {
                printf("Erreur : Division par zéro\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Résultat : %d\n", num1 % num2);
            } else {
                printf("Erreur : Division par zéro\n");
            }
            break;
        case '&':
            printf("Résultat : %d\n", num1 & num2);
            break;
        case '|':
            printf("Résultat : %d\n", num1 | num2);
            break;
        case '~':
            printf("Résultat : %d\n", ~num1);
            break;
        default:
            printf("Erreur : Opérateur non valide\n");
            break;
    }

    return 0;
}

