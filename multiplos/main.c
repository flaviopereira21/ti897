#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;


    printf("Digite o valor:");
    scanf("%d",&v);
    if(v%2==0){
      printf("%d e multiplo de 2\n",v);
    }
     if(v%3==0){
        printf("%d e multiplo de 3\n",v);
     }
     if(v%5==0){
        printf("%d e multiplo de 5\n",v);
     }

    return 0;
}
