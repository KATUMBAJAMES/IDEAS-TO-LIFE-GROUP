#include<stdio.h>


int main(){
    int phy[4]={98,76,98,87};
    int che[4]={96,78,98,87};
    int mtc[4]={78,56,98,87};

    int sum =0, n=0;
    for(int i=0; i<4; i++)
    {
        sum += phy[i];
        n++;
        sum += che[i];
        n++;
        sum += mtc[i];
        n++;
    }

    float av=(float)sum/n;
    printf("\nthe sum is %d",sum);
    printf("\n n is %d",n);

    printf("\nthe average is %.2f",av);
}