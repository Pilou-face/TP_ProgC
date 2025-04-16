#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        // Vérifier si le nombre est divisible par 11
        if (i % 11 == 0) {
            continue; // Passer au nombre suivant
        }

        // Vérifier si le nombre est divisible par 5 ou par 7
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Vérifier si la somme dépasse 5000
        if (somme > 5000) {
            break; // Arrêter la boucle
        }
    }

    // Afficher la somme finale
    printf("La somme finale est : %d\n", somme);

    return 0;
}
