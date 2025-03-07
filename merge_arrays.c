#include<stdio.h>
#include<string.h>

int main()
{

    char domestic[5][10];
    char wild[5][10];
    char merge[10][10];

    for(int i=0; i<5; i++) {
        printf("Enter domestic animal %d :", i+1);
        scanf("%s", &domestic[i]);
    }

    printf("\n\n");

    for(int i=0; i<5; i++) {
        printf("Enter wild animal %d :", i+1);
        scanf("%s", &wild[i]);
    }



    for(int i=0; i<5; i++) {
        strcpy(merge[i], domestic[i]);
    }

    for(int i=0; i<5; i++) {
        strcpy(merge[5+i], wild[i]);
    }

    printf("\n Merged array. ");
    for(int x=0; x<10; x++) {
        printf("\n%s", merge[x]);
    }
    return 0;
}