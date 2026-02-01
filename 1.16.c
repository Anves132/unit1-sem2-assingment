#include <stdio.h>

// Define a structure 
struct Student
{
    int roll_no;
    float marks;
    char grade;
};

int main()
{
    // Print the size of structure 
    printf("Size of Student structure = %ld bytes", sizeof(struct Student));

    return 0;
}