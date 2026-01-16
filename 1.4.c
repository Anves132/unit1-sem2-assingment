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
// to write a month name i use swich Condition
void month_name(struct date m)
{
    int ch;
    printf("Enter the month:-");
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
// to check leep year and days
void leep_year(struct date l)
{
    printf("Enter a year: ");
    scanf("%d", &l.year);

    if (l.year % 4 == 0) {
        printf("%d is a Leap Year", l.year);
    } else {
        printf("%d is Not a Leap Year", l.year);
    }
    printf("\nEnter a Month: ");
    scanf("%d", &l.month);
    if(l.month==4||l.month==6||l.month==9||l.month==11)
    {
        printf("%d has only 30 days",l.month);
    }
    else if (l.month==2)
    {
        printf("if year is leep year so in %d month only 29 day \n or not so 28 day",l.month);
    }
    
    else
    {
        printf("%d has only 31 days",l.month);
    }
}
int main()
{
    struct date s;
    read(&s); // addres of the date enter by user 
    month_name(s);// addres of display mount,day and year
    leep_year(s);//addres of check leep year and days
    return 0;
}