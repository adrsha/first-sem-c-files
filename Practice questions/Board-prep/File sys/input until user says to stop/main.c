#include <stdio.h>

typedef struct Employee
{
    char name[10];
    int salary;
} emp;

int main()
{
    int n, i = 1;
    char ans, s[10];
    emp e1;
    FILE *f1;

    printf("Enter the name of the file to write to: ");
    scanf("%s", &s);
    f1 = fopen(s, "w");
    if (f1 == NULL)
    {
        printf("Something went wrong while opening/creating the file. ");
        exit(1);
    }

    while (ans != 'n')
    {
        printf("Enter the name of the employee:");
        scanf("%s", e1.name);
        printf("Enter the salary of the employee:");
        scanf("%d", &e1.salary);

        fprintf(f1, "%s %d", e1.name, e1.salary);

        printf("Do you want to add more entries? (y/n): ");
        scanf(" %c", &ans);
    }
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (fscanf(f1, "%s %d", e1.name, &e1.salary) != NULL)
    {
        if (i == n)
        {
            break;
        }
        i++;
    }
    printf("\nThere is some stuff here.\n");
    fscanf(f1, "%s %d", e1.name, &e1.salary);
    printf("Name: %s Salary: %d ", e1.name, e1.salary);
    return 0;
}