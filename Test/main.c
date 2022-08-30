#include <stdio.h>
struct employee
{
    char name[20];
    int age, salary;
} e[3];
void sort(struct employee[], int);

int main()
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter employee %d name age and salary: ", i + 1);
        scanf("%s%d%d", &e[i].name, &e[i].age, &e[i].salary);
    }
    sort(e, 3);

    printf("The sorted list is : ");
    for (i = 0; i < 3; i++)
    {
        printf("Employee %d \n", i);
        printf("Name: %s, Age: %d Salary: %d ", e[i].name, e[i].age, e[i].salary);
    }

    return 0;
}

void sort(struct employee e[], int n)
{
    int i, j;
    struct employee t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (e[i].salary > e[j].salary)
            {
                t = e[i];
                e[i] = e[j];
                e[j] = t;
            }
        }
    }
}