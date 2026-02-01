#include <stdio.h>
#include <string.h>

struct census 
{
    char city[20];
    long population;
    float literacy;
}c[5],temp;

int main() 
{
   
    int i,j;

    // read details 
    for (i = 0; i < 5; i++) {
        printf("\nEnter city name: ");
        scanf("%s", c[i].city);

        printf("Enter population: ");
        scanf("%ld", &c[i].population);

        printf("Enter literacy level: ");
        scanf("%f", &c[i].literacy);
    }

    // sort details 
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(c[i].city, c[j].city) > 0) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    //display sorted list 
    printf("\ncity\tpopulation\tliteracy\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%ld\t\t%.2f\n",c[i].city, c[i].population, c[i].literacy);
               
    }

    return 0;
}
