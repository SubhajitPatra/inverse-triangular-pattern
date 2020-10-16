#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
   a=7;
   while(a>0){
     int b=1;
    while(b<a){
        printf("*");
        b=b+1;
    }
    printf("*\n");
    a=a-1;
   }
    return 0;
}
