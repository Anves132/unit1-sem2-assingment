 //To define a structure date containing day, month, and year and develop an interactive modular program to read, validate, and display the date   
#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
// to read or enter date from the user
void read(struct date *d)
{
    printf("Enter the day month year:-");
    scanf("%d %d %d",&d->day,&d->month,&d->year);
}
int valid(struct date v)
{
    // valide date 
    if(v.day<1||v.day>31)return 0;

    // valide month 
    if(v.month<1||v.month>12)return 0;

    int day_month[13]={0,31,28,30,31,30,31,30,31,30,31,30,31};// days in mouth with non leep year

    // to check leep year
    if((v.year%4==0&&v.year%100!=0)||v.year%400==0)
    {
        day_month[2]=29;
    }
    // to check date are exceed in month
    if(v.day>day_month[v.month])
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
// to write a month name i use swich Condition
void month_name(struct date m)
{
    int ch;
    printf("\nEnter the month:-");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("January ");
        break;
    case 2:
    printf("February");
        break;
    case 3:
    printf("March");
        break;
    case 4:
        printf("April");
            break;
    case 5:
        printf("May");
            break;
    case 6:
        printf("June");
            break;
    case 7:
        printf("July");
            break;
    case 8:
        printf("August");
            break;
    case 9:
        printf("September");
            break;
    case 10:
        printf("October");
            break;
    case 11:
        printf("November");
            break;
    case 12:
        printf("December");
            break;

    default:
        printf("invalled");
        break;
    }
    printf(" %d,%d\n",m.day,m.year);// to print format like this "April 29,2002"

}
int main()
{
    struct date s;
    read(&s); // addres of the date enter by user 
    if(valid(s)) // if date are valide so print the date 
    {
        printf("date are valid");
        month_name(s);// addres of display mount,day and year

    }
    else
    {
        printf("date are not valid");
    }
    return 0;
}