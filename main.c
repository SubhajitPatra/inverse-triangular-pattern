#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,x;
    printf("set the limit\n");
    scanf("%d",&x);
    for(a=x;a>1;a=a-1){
            for(int b=2;b<a;b=b+1){
                printf("*");
            }
        printf("*\n");
    }
    return 0;
}
