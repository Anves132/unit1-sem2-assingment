//Add a fuction called nextday to the program desigened in exercise 1.4 
#include <stdio.h>
// Structure to store date 
struct date
{
    int day;
    int month;
    int year;
};

// Function to check leap year 
int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

// Function to return next date after adding days 
struct date nextdate(struct date d, int addDays)
{
    int daysInMonth;

    while (addDays > 0)
    {
        // Set number of days in current month 
        if (d.month == 1 || d.month == 3 || d.month == 5 ||
            d.month == 7 || d.month == 8 || d.month == 10 ||
            d.month == 12)
            daysInMonth = 31;
        else if (d.month == 4 || d.month == 6 ||
                 d.month == 9 || d.month == 11)
            daysInMonth = 30;
        else   /* February */
        {
            if (isLeapYear(d.year))
                daysInMonth = 29;
            else
                daysInMonth = 28;
        }

        d.day++;

        if (d.day > daysInMonth)
        {
            d.day = 1;
            d.month++;

            if (d.month > 12)
            {
                d.month = 1;
                d.year++;
            }
        }

        addDays--;
    }

    return d;
}

// Main function 
int main()
{
    struct date today, result;
    int days;

    printf("Enter present date (dd mm yyyy): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    printf("Enter number of days to add: ");
    scanf("%d", &days);

    result = nextdate(today, days);

    printf("Next date is: %02d-%02d-%d\n",
           result.day, result.month, result.year);

    return 0;
}