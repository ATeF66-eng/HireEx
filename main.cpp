#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void printe() {
    printf("Invalid Number... Try again\n\n");
}

void print() {
    printf("select an option \n 1-find a job\n 2-offer a job\n");

}

void job() {
    int type;
    scanf("%d",&type);

    while(type !=1 && type !=2 && type !=3 && type !=4 && type !=5) {
        printe();
        printf("Enter number from 1 to 5:");
        scanf("%d",&type);
}

    switch (type) {
        case 1:
            printf("The Requirements for this job are : \n");
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
            printe();
    }
}


int main(void) {
    
        int x;

        printf("-------- Welcome to Hirex --------\n   (the best place to find & offer a job) \n");                
        print();
        scanf("%d",&x);

        while(x!=1 && x!=2) {
            printe();
            print();
            scanf("%d",&x);
        }

        switch (x) {

            case 1:

                printf(" 1-Engineering\n 2-Medical field\n 3-Science\n 4-Education\n");
                
                int field;
                scanf("%d",&field);

                while(field!=1  && field!=2 && field!=3 && field!=4) {
                    printe();
                    printf(" 1-Engineering\n 2-Medical field\n 3-Science\n 4-Education\n");

                    scanf("%d",&field);

                    }

                switch(field) {

                    case 1:
                        printf("1-Programming Engineer | Full Time | Cairo | at Siemens digital industries \n2-Communication Engineer | Part Time | Giza | at EgyptAir  Company \n3-IT Engineer | Part Time | Remotely | at FAMA Company \n4-Architecture Engineer| Full Time | Dubai | at Arabian Conctruction Company \n5-Electric field | Internship | Cairo | at Elswedy Electric Company \n");
                        job();
                    break;

                    case 2:
                        printf(" 1-Cardiologist | full time | Cairo |at Clinca Egypt \n 2-Dentist | part time | Giza |at Al-Arabi clinics  \n 3-Surgeon | internship | Mansoura |at Technoclinc specialized clinics\n 4-Veterinarian |part time| Zifta |at Al Safa Veterinary clinic  \n 5-Allergist |full time| Cairo| at Core clinic\n");
                        job();
                    break;

                    case 3:
                        printf("1-Biologist | full time | Cairo | at downtown \n 2-Chemist | full time | 6th of October city | at Chemical industry \n 3-Environmental scientist | full time |at Chemical industry\n 4-Data scientist | remotly | Cairo |at aptendo\n 5-Aeronautical Engineer | full time | Giza |at chemical industry \n");
                        job();
                    break;

                    case 4:
                        printf("1-Math teacher | full time | Cairo |at al-Ahram secondary school \n 2-Arabic teacher | part time | Mansoura | at al-shahid Ahmed El-Mansy school\n 3-school principal | full time | Mit Ghamr |at Mohamed Koraim primary school\n 4-English teacher | part time | Zagazig |at Omar makram secondary  school\n 5-Physics teacher | full time | Alexandria |at Soliman El-halaby secondary school\n ");
                        job();
                    break;
                    }
            break;   


            case 2:
                printf("company");
            break;


            default:
                printe();
            break;

        }


}
