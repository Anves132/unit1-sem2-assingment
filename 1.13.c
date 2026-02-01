#include <stdio.h>
#include <string.h>

struct hotel
{
    char name[50];
    char address[100];
    int grade;
    float charge;
    int rooms;
};

// Function to print hotels of given grade 
void print_Grade(struct hotel h[], int n, int g)
{
    int i;
    printf("\nHotels of Grade %d:\n", g);
    for (i = 0; i < n; i++)
    {
        if (h[i].grade == g)
        {
            printf("%s  %.2f\n", h[i].name, h[i].charge);
        }
    }
}

// Function to print hotels with charges less than given value 
void print_Charge(struct hotel h[], int n, float c)
{
    int i;
    printf("\nHotels with room charge less than %.2f:\n", c);
    for (i = 0; i < n; i++)
    {
        if (h[i].charge < c)
        {
            printf("%s  %.2f\n", h[i].name, h[i].charge);
        }
    }
}

int main()
{
    struct hotel h[3] = {
        {"Hotel Taj", "Mumbai", 5, 5500, 200},
        {"Hotel Plaza", "Pune", 3, 2500, 120},
        {"Hotel City Inn", "Nagpur", 2, 1500, 80}
    };

    print_Grade(h, 3, 3);
    print_Charge(h, 3, 3000);

    return 0;
}