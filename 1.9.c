// define a structure to represent a vector(a series of integer values)and write a modular program.
#include<stdio.h>
struct vector
{
    int a[10];
    int n;
};
int main()
{
    struct vector v;
    int i,value,index,scalar;
   // (a). to create a vector
    printf("Enter the number of Element:-");
    scanf("%d",&v.n);
    printf("Enter the elements:-\n");
    for(i=0;i<v.n;i++)
    {
        scanf("%d",&v.a[i]);
    }
    //----------------------------------------------------------------
    //(b). to modify the value of a given element 
    printf("Enter the position and new element:-");
    scanf("%d %d",&index,&value);
    v.a[index]=value;
    printf("New element:-\n");
    for(i=0;i<v.n;i++)
    {
        printf("\n%d",v.a[i]);
    }
    //----------------------------------------------------------------
    // (c). to multiply by a scalar value 
    printf("\nEnter the scalar value:-");
    scanf("%d",&scalar);
    for(i=0;i<v.n;i++)
    {
        v.a[i]=v.a[i]*scalar;
    }
    //----------------------------------------------------------------
    // (d) to display the vector value in the form(10,20,30.....)
    printf("vector=(");
    for(i=0;i<v.n;i++)
    {
        printf("%d",v.a[i]);
        if(i<v.n-1)
        {
            printf(", ");
        }
    }
    printf(")");
    return 0;
}