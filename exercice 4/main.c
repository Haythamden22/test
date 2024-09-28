#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0,plus_grand,plus_petit;
    float tab[5];

    printf("entrer les nombres :\n ");

    for(;i<5;i++){
        printf("tab[%d]\n",i);
        scanf("%f",&tab[i]);
    }
    plus_grand=tab[0];

    for(i=0;i<5;i++){
        if(plus_grand<tab[i])
            plus_grand=tab[i];


        }
        plus_petit=tab[0];
        for(i=0;i<5;i++){
            if(plus_petit>tab[i])
                plus_petit=tab[i];
        }
        printf("le plus grand :%d\n",plus_grand);
        printf("le plus petit :%d\n",plus_petit);
    return 0;
}
