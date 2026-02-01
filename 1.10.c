//add function to the program of Exercise 11.9 that accepts two vector as input parameters and return the addition of two vectors.
#include<stdio.h>
struct vector
{
    int a[10];
    int n;
};
void addition(struct vector v1,struct vector v2)
{
    int i;
    printf("\nAddition of the two vector:-(");
    for(i=0;i<v1.n;i++)
    {
        printf("%d",v1.a[i]+v2.a[i]);
        if(i<v1.n-1)
        {
            printf(", ");
        }
    }
    printf(")");
}
int main()
{
    struct vector v1,v2;
    int i;
    printf("Enter the element:-");
    scanf("%d",&v1.n);
    // input the first element
    printf("\nEnetr the elements:-\n");
    for(i=0;i<v1.n;i++)
    {
        scanf("%d",&v1.a[i]);
    }
    // input the second element
    v2.n=v1.n;
    printf("\nEnter the second element:-\n");
    for(i=0;i<v2.n;i++)
    {
        scanf("%d",&v2.a[i]);
    }
    addition(v1,v2);
    return 0;
}