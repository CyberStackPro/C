#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/utsname.h>

int variables(){

    int age;
    float salary;
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



int main(){
    pid_t pid = getpid();
    printf("My PID is %d\n", pid);


    struct utsname sys_info;
    if(uname(&sys_info) == 0){
        // printf("System: %s %s %s\n",
        //              info.sysname,
        //              info.release,
        //              info.machine
        // );
        info(&sys_info);

    }else {
          perror("uname");
    }

 return 0;
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
