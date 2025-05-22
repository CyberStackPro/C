#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/utsname.h>

#include <stdio.h>

void printMessage();
int variables() {
    // Declaration: type variable_name;
    int age;              // Declares an integer variable named 'age'
    float salary;         // Declares a float variable named 'salary'
    double preciseValue;  // Declares a double variable
    char initial;         // Declares a character variable

    // Initialization: assigning an initial value
    age = 30;                       // Assigns 30 to 'age'
    salary = 55000.75f;             // Assigns 55000.75 to 'salary'. The 'f' makes it a float literal.
                                    // Without 'f', 55000.75 would be a double by default.
    preciseValue = 12345.67890123;  // Assigns a double value
    initial = 'J';                  // Assigns the character 'J' to 'initial'. Note single quotes.

    // Declaration and Initialization can be done in one step
    int year = 2025;
    char grade = 'A';

    printf("Age: %d\n", age);                     // %d is a format specifier for integers
    printf("Salary: %f\n", salary);               // %f is for floats (and often doubles for printf)
    printf("More Precise Value: %lf\n", preciseValue); // %lf is typically for doubles with printf
    printf("Initial: %c\n", initial);             // %c is for characters
    printf("Year: %d, Grade: %c\n", year, grade);

    // Example of void in a function declaration (prototype)
     // printMessage(); // Declares a function that takes no arguments and returns nothing

    printMessage(); // Calls the function

    return 0;
}


void printMessage(){
    printf("This message comes from a void func!\n");
}

int add(int a, int b);

void info(const struct utsname *);

// int main()
// {
//    int numbers[5] ={10,20,30,40,50};

//    char name[20] = "Alice";

//   printf("First number: %d\n", numbers[0]);
//   printf("Third  number: %d\n", numbers[2]);


//   printf("Name: %s\n", name);

//   printf("Length of name: %lu\n", strlen(name));

//   char anotherName[20];
//   strcpy(anotherName, name);

//   printf("Copied name: %s\n", anotherName);
//   return 0;
// }

int greet(){
    int age;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter Your age: ");
    scanf("%d",&age);


    printf("Hello, %s! You are %d years old\n", name,age);

    return 0;
}


float add2(int x, int y);

int main(){
    // pid_t pid = getpid();
    // printf("My PID is %d\n", pid);


    // struct utsname sys_info;
    // if(uname(&sys_info) == 0){
    //     // printf("System: %s %s %s\n",
    //     //              info.sysname,
    //     //              info.release,
    //     //              info.machine
    //     // );
    //     info(&sys_info);

    // }else {
    //       perror("uname");
    // }
     // variables();
     // greet();

     float data = add2(10, 20);
     printf("This is your data %f\n", data);

 return 0;
}

float add2(int x, int y){
    return (float)(x + y);
}

void info(const struct utsname *data) {
    printf("System name: %s\n", data->sysname);
    printf("Node name: %s\n", data->nodename);
    printf("Release: %s\n", data->release);
    printf("Version: %s\n", data->version);
    printf("Machine: %s\n", data->machine);
}



int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 or handle the error as needed
    }
}
