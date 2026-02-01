// desing a function update that accepts the date structure designed in 1.4 to increment the date by one day and return new date.
#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
}d;
// input date enter by user
void input(struct date *i)  
{
    printf("Enter day (1-31):");
    scanf("%d",&i->day);
    printf("Enter the month(1-12):");
    scanf("%d",&i->month);
    printf("Enter year:");
    scanf("%d",&i->year);
}
void update(struct date *u)
{
    int date[]={0,31,28,30,31,30,31,30,31,30,31,30,31};
    if(u->month ==2 && u->year % 4==0)
    {
        date[2]=29;
    }
    u->day++;
    if(u->day > date[u->month])
    {
        u->day=1;
        u->month++;
    }
    if(u->month > 12)
    {
        u->month=1;
        u->year++;
    }
}
// for display date 
void read_date(struct date r)
{
    char *month[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("updated date :-");
    printf("%s %d,%d",month[d.month],d.day,d.year);
}
int main()
{
    input(&d); // for input the date enter by user
    update(&d);
    read_date(d);// for display date 
    return 0;
}