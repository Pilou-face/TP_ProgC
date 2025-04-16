#include <stdio.h>

void afficherBinaire(int nombre) {
    int taille = sizeof(int) * 8; // Nombre de bits dans un int
    int masque = 1 << (taille - 1); // Masque pour obtenir le bit le plus significatif

    printf("%d en binaire : ", nombre);

    for (int i = 0; i < taille; i++) {
        // Vérifier si le bit correspondant est défini
        if (nombre & masque) {
            printf("1");
        } else {
            printf("0");
        }
        // Décaler le masque vers la droite pour vérifier le bit suivant
        masque >>= 1;
    }

    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        afficherBinaire(nombres[i]);
    }

    return 0;
}
