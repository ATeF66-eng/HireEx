#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void printe() {
    printf("\n Invalid Number... Try again\n\n");
}

void print() {
    printf(" 1-find a job\n 2-offer a job \n select an option:");

}

void job() {

    int type,age;
    char name[100];
    printf("\n Choose type:  ");
    scanf("%d", &type);


    while(type !=1 && type !=2 && type !=3 && type !=4 && type !=5) {
        printe();
        printf("Enter number from 1 to 5:");
        scanf("%d", &type);
    }


}

void req() {

    printf("\n your name is: ");
    char name[20];
    scanf("%s", &name);

    printf("\n your age: ");
    float age;
    scanf("%f", &age);

    printf("\n How many years of experience do you have : ");
    float exp;
    scanf("%f", &exp);


}

void job1() {
    char bc[5];
    char en[5];

    req();
    printf("\n\n\nThe requirements for this job are: \n");
    printf(" 1-Do you have a bachelor of Engineering \n\n Answer yes or no: ");
    scanf("%s", &bc);
    printf("\n\n 2-Your score in EN is B2 or aove ? \n\n Answer yes or no: ");
    scanf("%s", &en);

}

void job2() {
    char bc[5];
    char en[5];

    req();
    printf("\n\n\nThe requirements for this job are:\n");
    printf(" 1-Do you have a bachelor of medicine? \n\n Answer yes or no: ");
    scanf("%s", &bc);
    printf("\n\n 2-Your score in EN is B2 or aove?\n\n Answer yes or no: ");
    scanf("%s", &en);

}

void job3() {
    char bc[5];
    char en[5];

    req();
    printf("\n\n\nThe requirements for this job are:\n ");
    printf(" 1-Do you have a bachelor of science? \n\n Answer yes or no: ");
    scanf("%s", &bc);
    printf("\n 2-Practical skill \n   Do you have this skill?\n\n Answer yes or no: ");
    scanf("%s",&bc);
    printf("\n 3-Soft skills \n   Do you have this skill?\n\n Answer yes or no: ");
    scanf("%s", &bc);
    printf("\n 4-Your score in EN is B2 or aove ? \n\n Answer yes or no: ");
    scanf("%s", &en);

}

void job4() {
    char bc[5];
    char en[5];

    req();
    printf("\n\n\nThe requirements for this job are:\n ");
    printf(" 1-Do you have a bachelor of literature \n\n Answer yes or no: ");
    scanf("%s",&bc);
    printf("\n 2-Communication skill \n   Do you have this skill? \n\n Answer yes or no: ");
    scanf("%s",&bc);
    printf("\n 3-Explanation skill \n   Do you have this skill? \n\n Answer yes or no: ");
    scanf("%s",&bc);
    printf("\n 2-Your score in EN is B2 or aove ? \n\n Answer yes or no: ");
    scanf("%s",&en);
}

int main(void) {

    int x;

    printf("-------- Welcome to Hirex --------\n   (the best place to find & offer a job) \n");
    print();
    scanf("%d",&x);

    while(x!=1 && x!=2) {
        printe();
        print();
        scanf("%d", &x);
    }

    switch (x) {

        case 1:

            printf("\n 1-Engineering\n 2-Medical field\n 3-Science\n 4-Education\n");
            int field;
            printf("Choose a field:");
            scanf("%d",&field);

            while(field!=1  && field!=2 && field!=3 && field!=4) {
                printe();                
                printf(" 1-Engineering\n 2-Medical field\n 3-Science\n 4-Education\n");
                printf("Choose a field:");
                scanf("%d", &field);
                }

            switch(field) {

                case 1:

                    
                    
                    printf("\n1-Programming Engineer | Full Time | Cairo | at Siemens digital industries \n2-Communication Engineer | Part Time | Giza | at EgyptAir  Company \n3-IT Engineer | Part Time | Remotely | at FAMA Company \n4-Architecture Engineer| Full Time | Dubai | at Arabian Conctruction Company \n5-Electric field | Internship | Cairo | at Elswedy Electric Company \n");
                    job(); 
                    job1();
                break;

                case 2:
                 
                    printf(" 1-Cardiologist | full time | Cairo |at Clinca Egypt \n 2-Dentist | part time | Giza |at Al-Arabi clinics  \n 3-Surgeon | internship | Mansoura |at Technoclinc specialized clinics\n 4-Veterinarian |part time| Zifta |at Al Safa Veterinary clinic  \n 5-Allergist |full time| Cairo| at Core clinic\n");
                    job();
                    job2();

                break;

                case 3:

                    printf("1-Biologist | full time | Cairo | at downtown \n 2-Chemist | full time | 6th of October city | at Chemical industry \n 3-Environmental scientist | full time |at Chemical industry\n 4-Data scientist | remotly | Cairo |at aptendo\n 5-Aeronautical Engineer | full time | Giza |at chemical industry \n");
                    job();
                    job3();

                break;

                case 4:        
                    
                    printf("1-Math teacher | full time | Cairo |at al-Ahram secondary school \n 2-Arabic teacher | part time | Mansoura | at al-shahid Ahmed El-Mansy school\n 3-school principal | full time | Mit Ghamr |at Mohamed Koraim primary school\n 4-English teacher | part time | Zagazig |at Omar makram secondary  school\n 5-Physics teacher | full time | Alexandria |at Soliman El-halaby secondary school\n ");
                    job();
                    job4();

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
