#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void) {
    printf("Welcome to Hirex\n the perfect place to find/offer a job\n");
int x;
    printf(" 1-find a job\n 2-offer a job\n");
    scanf("%d",&x);
    if(x==1) {
printf("1-Engneering\n 2-Medical field\n 3-Arts\n 4-Business\n 5-Education");
        int y;
        scanf("%d",&y);
        printf("Nice Job\n",y);
        if (y==1) {
            int z;
            printf("1-Programming Engineer | Full Time | Cairo | at Siemens digital industries \n
                2-Communication Engineer | Part Time | Giza | at EgyptAir  Company \n
                3-IT Engineer | Part Time | Remotly | at FAMA Company \n
                4-Architecture Engineer| Full Time | Dubai | at Arabian Conctruction Company \n
                5-Electric field | Internship | Cairo | at Elswedy Electric Company \n");
            scanf("%d",&z);

        }
    }
}
