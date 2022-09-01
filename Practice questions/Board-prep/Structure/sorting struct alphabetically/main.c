#include <stdio.h>

struct Employee
{
    char name[20];
    int id;
    char post[10];
} e[10];

void sort(struct Employee[], int n);

int main()
{

    int i, n;
    printf("Input the number of employees: ");
    scanf("%d", &n);
    printf("Enter the data of your employees:\n ");
    for (i = 0; i < n; i++)
    {
        printf("For Employee %d: \n", i);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Post: ");
        scanf("%s", e[i].post);
    }
    sort(e, n);

    for (i = 0; i < n; i++)
    {
        printf("For Employee %d: \n", i);
        printf("Name: ");
        printf("%s", e[i].name);
        printf("ID: ");
        printf("%d", e[i].id);
        printf("Post: ");
        printf("%s", e[i].post);
    }
    return 0;
}

void sort(struct Employee e[10], int n)
{
    int i, j;
    char t[20];
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(e[i].name, e[j].name) > 0)
            {
                strcpy(t, e[i].name);
                strcpy(e[i].name, e[j].name);
                strcpy(e[j].name, t);
            }
        }
    }
}