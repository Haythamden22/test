#include <stdio.h>
#include <stdlib.h>

int main()
{
    int longueur,largeur;
    float aire,perimetre;
    printf("entrer longueur : \n");
    scanf("%d",&longueur);
    printf("entrer largeur : \n");
    scanf("%d",&largeur);
    aire=longueur*largeur;
    printf("l'aire = %.2f\n",aire);
    perimetre=(longueur+largeur)*2;
    printf("le perimetre = %f",perimetre);
    return 0;
}
