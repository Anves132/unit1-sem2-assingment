/*Modify the input function used in Exercise 11.4 so that it reads a date in long integer form(for example: 19450815) 
and stores the values into day, month and year members of the structure.*/
#include <stdio.h>

/* structure definition */
struct date
{
    int day;
    int month;
    int year;
};
void modify_date(struct date m)
{
    long int num;

    printf("Enter date in YYYYMMDD format: ");
    scanf("%ld", &num);

    m.day = num % 100;
    num = num / 100;

    m.month = num % 100;
    num = num / 100;

    m.year = num;

    printf("Day   : %d\n", m.day);
    printf("Month : %d\n", m.month);
    printf("Year  : %d\n", m.year);
}
int main()
{
    struct date d;
    modify_date(d);

    return 0;
}
