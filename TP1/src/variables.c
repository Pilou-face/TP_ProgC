/*
 * Exercice 1.4 - Affectation et affichage des variables de types de base
 * 
 * Ce programme affecte et affiche les valeurs des variables de différents types de base,
 * incluant les versions signées et non-signées lorsque c'est pertinent.
 */

#include <stdio.h>

int main() {
    // Déclaration et affectation des variables de type char
    char c = 'A';
    signed char sc = -50;
    unsigned char uc = 200;
    
    // Déclaration et affectation des variables de type short
    short s = -1000;
    signed short ss = -20000;
    unsigned short us = 60000;
    
    // Déclaration et affectation des variables de type int
    int i = -100000;
    signed int si = -200000;
    unsigned int ui = 3000000000U; // U pour spécifier unsigned
    
    // Déclaration et affectation des variables de type long int
    long int li = -2000000000L; // L pour spécifier long
    signed long int sli = -3000000000L;
    unsigned long int uli = 4000000000UL; // UL pour spécifier unsigned long
    
    // Déclaration et affectation des variables de type long long int
    long long int lli = -9000000000000000000LL; // LL pour spécifier long long
    signed long long int slli = -8000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL; // ULL pour spécifier unsigned long long
    
    // Déclaration et affectation des variables de type float, double et long double
    float f = 3.14159F; // F pour spécifier float
    double d = 3.14159265358979323846;
    long double ld = 3.14159265358979323846L; // L pour spécifier long double
    
    // Affichage des valeurs des variables de type char
    printf("char : %c (valeur numérique: %d)\n", c, c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);
    
    // Affichage des valeurs des variables de type short
    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n", us);
    
    // Affichage des valeurs des variables de type int
    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n", ui);
    
    // Affichage des valeurs des variables de type long int
    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n", uli);
    
    // Affichage des valeurs des variables de type long long int
    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n", ulli);
    
    // Affichage des valeurs des variables de type float, double et long double
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);
    
    return 0;
}
