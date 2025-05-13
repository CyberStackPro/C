#include <stdio.h>

//
int main()
{
    // variables are containers for storing data

    int x;       // declaration
    x = 123;     // iitialazation
    int y = 321; // dec + init

    int age = 21; // integer

    float gpa = 2.05; // float

    char grade = 'C';     // string char
    char name[] = "Yeab"; // array of characters

    // format specifiers like %d %f %c and more ...
    printf("Hello My Name is %s\n", name);
    printf("I'm im %d years old\n", age);
    printf("Your Average grade is %c\n", grade);
    printf("Your Gpa is %f\n", gpa);

    /* code */
    return 0;
}
