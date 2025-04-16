/*
 * Exercice 1.2 - Calcul de l'aire et du périmètre d'un cercle
 * 
 * Ce programme calcule l'aire et le périmètre d'un cercle
 * en utilisant une variable de type double pour le rayon.
 */

#include <stdio.h>  // Pour les fonctions d'entrée/sortie (printf)
#include <math.h>   // Pour la constante M_PI

int main() {
    // Déclaration de la variable pour stocker le rayon du cercle
    double rayon = 5.0;  // Valeur arbitraire du rayon (peut être modifiée)
    
    // Calcul de l'aire du cercle en utilisant la formule aire = pi * rayon * rayon
    double aire = M_PI * rayon * rayon;
    
    // Calcul du périmètre du cercle en utilisant la formule périmètre = 2 * pi * rayon
    double perimetre = 2 * M_PI * rayon;
    
    // Affichage des résultats
    printf("Pour un cercle de rayon %.2f :\n", rayon);
    printf("Aire = %.2f\n", aire);
    printf("Périmètre = %.2f\n", perimetre);
    
    return 0;  // Indique que le programme s'est terminé avec succès
}
