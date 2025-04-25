#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void) {
    printf("Welcome to Hirex\n the perfect place to find/offer a job\n");
int x;
    printf("choose\n 1-find a job\n 2-offer a job\n");
    scanf("%d",&x);
    if(x==1) {
printf("1-Engneering\n 2-Medical field\n 3-Arts\n 4-Business\n 5-Education");
        int y;
        scanf("%d",&y);
        printf("Nice Job\n",y);
        if (y==1) {
            int z;
            printf("1-Programming Engineer\n 2-Communication Engineer\n 3-IT Engineer\n 4-Architectural Engineer\n 5-Electric field\n");
            scanf("%d",&z);

        }
    }
}