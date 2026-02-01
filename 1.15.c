#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};

struct student
{
    char name[30];
    struct date dob;
    int marks;
};
void swap(struct student *a, struct student *b)
{
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    struct student s[5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("\nName: ");
        scanf("%s", s[i].name);

        printf("DOB (day month year): ");
        scanf("%d %d %d", &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);

        printf("Marks: ");


        scanf("%d", &s[i].marks);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                swap(&s[i], &s[j]);
            }
        }
    }

        printf("\n\nRank-wise Student List\n");
    printf("---------------------------------------------------\n");
    printf("Rank\tName\tDOB\t\tMarks\n");
    printf("---------------------------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d-%d-%d\t%.d\n",
               i + 1,
               s[i].name,
               s[i].dob.day,
               s[i].dob.month,
               s[i].dob.year,
               s[i].marks);
    }

    return 0;
}

