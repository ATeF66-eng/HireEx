#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void job() {
    int type=0;
    scanf("%d",&type);
    switch (type) {
        case 1:
            printf("The Requirements for this job are :\n");
        break;
        case 2:
            printf("The requirements for this job are :\n");
        break;
        case 3:
            printf("The requirements for this job are :\n");
        break;
        case 4:
            printf("The requirements for this job are :\n");
        break;
        case 5:
            printf("The requirements for this job are :\n");
        break;
        default:
            printf("Error :\n");
    }
}
int main(void) {
    printf("Welcome to Hirex\n the perfect place to find/offer a job\n");
    int x;
    printf("choose\n 1-find a job\n 2-offer a job\n");
    scanf("%d",&x);
    if(x==1) {
        printf("1-Engineering\n 2-Medical field\n 3-Science\n 4-Business\n 5-Education\n");
        int field=0;
        scanf("%d",&field);
        switch(field) {
            case 1:

            printf("1-Programming Engineer | Full Time | Cairo | at Siemens digital industries \n2-Communication Engineer | Part Time | Giza | at EgyptAir  Company \n3-IT Engineer | Part Time | Remotely | at FAMA Company \n4-Architecture Engineer| Full Time | Dubai | at Arabian Conctruction Company \n5-Electric field | Internship | Cairo | at Elswedy Electric Company \n");

          job();
break;

            case 2:
                printf("1-Cardiologist | full time | Cairo |at Clinca Egypt \n 2-Dentist | part time | Giza |at Al-Arabi clinics  \n 3-Surgeon | internship | Mansoura |at Technoclinc specialized clinics\n 4-Veterinarian |part time| Zifta |at Al Safa Veterinary clinic  \n 5-Allergist |full time| Cairo| at Core clinic|\n");
            job();
            break;
            case 3:
                printf("1-Biologist | full time | Cairo | at downtown| 2-Chemist | full time | 6th of Octobr city | at Chemical industry| 3-")
        }
        }
    }

