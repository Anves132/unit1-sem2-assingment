#include <stdio.h>

// structure definition 
struct student
{
    int roll_no;
    float marks;
};

int main()
{
    struct student s;          // structure variable
    struct student *ptr;       // pointer to structure

    ptr = &s;                  // pointer stores address of structure

    // input using pointer notation 
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // display using pointer notation 
    printf("\nStudent Details:\n");
    printf("Roll Number = %d\n", ptr->roll_no);
    printf("Marks = %.2f\n", ptr->marks);

    return 0;
}
