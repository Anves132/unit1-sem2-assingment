//Write a C program to print the size of a structure and union having same members
#include <stdio.h>

// Structure declaration 
struct sample {
    int number;
    float temperature;
    char grade;
}s;

// Union declaration 
union sample_u {
    int number;
    float temperature;
    char grade;
}u;

int main() {


    printf("Size of structure = %ld bytes\n", sizeof(s));
    printf("Size of union     = %ld bytes\n", sizeof(u));

    return 0;
}
