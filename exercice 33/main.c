#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,X;
    printf(" N :\n");
    scanf("%d",&N);
    if(N<2)
        printf("%d non premier",N);
    else{
        X=0;
        for(i=2;i<N-1;i++){
            if(N%i==0){
                X=1;
            }
        }
    }
    if(X==0)
        printf("%d premier",N);
    else
        printf("%d non premier",N);

    return 0;
}
