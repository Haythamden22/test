#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("l'age : \n");
    scanf("%d",&age);
    if(age<18)
        printf("vous n'etes pas eligible pour voter");
    else
        printf("vous etes eligible pour voter");

    return 0;
}
