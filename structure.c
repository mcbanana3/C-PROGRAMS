#include<stdio.h>

struct Person{
    char name[50];
    int age;
    float salary;
};

int main(){

    struct Person person1;

    printf("Enter Name : ");
    scanf("%s", person1.name);
    printf("Enter AGE : ");
    scanf("%d", &person1.age);
    printf("Enter Salary : ");
    scanf("%f", &person1.salary);

    struct Person *ptr = &person1;

    printf("Name is : %s\n", person1.name);
    printf("Age is : %d\n", person1.age);
    printf("Salary is : %f\n", person1.salary);

    printf("Name is : %s\n", ptr->name);
    printf("Age is : %d\n", ptr->age);
    printf("Salary is : %f\n", ptr->salary);

    printf("Name is : %s\n", (*ptr).name);
    printf("Age is : %d\n", (*ptr).age);
    printf("Salary is : %f\n", (*ptr).salary);

    return 0;
}