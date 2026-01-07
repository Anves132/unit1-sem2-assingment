/*modify the above program such that a function is used to input values to the members and another function 
to display the time*/
#include<stdio.h>
struct time
{
    int hour;
    int minute;
    int second;
}t;

void input(struct time *i)      // the first function to input the values from the user
{
    printf("Enter the hour:");
    scanf("%d",&i->hour);
    printf("Enter the minute:");
    scanf("%d",&i->minute);
    printf("Enter the second:");
    scanf("%d",&i->second);
}

void display(struct time *d)        // the second fuction to display time 
{
    printf("%d:%d:%d",d->hour,d->minute,d->second);
}
int main()
{
       input(&t);  // addres of input function
       display(&t); // addres of output function
    return 0;
}  