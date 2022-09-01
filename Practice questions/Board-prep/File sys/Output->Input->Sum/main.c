#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    char name[20];
    int marks;
} st;
int main()
{
    st *add, *add2;
    FILE *p;
    int n, i, sum = 0;

    printf("Enter the number of students.");
    scanf("%d", &n);
    add = (st *)calloc(n, sizeof(st));
    add2 = (st *)calloc(n, sizeof(st));
    p = fopen("output", "wb+");

    for (i = 0; i < n; i++)
    {
        printf("Enter the name and marks of student %d. ", i + 1);
        scanf("%s%d", (add + i)->name, &(add + i)->marks);
        fwrite(add + i, sizeof(st), 1, p);
    }
    rewind(p);
    for (i = 0; fscanf(p, "%s %d", (add2 + i)->name, &(add2 + i)->marks) != EOF; i++)
    {
        fscanf(p, "%s %d", (add2 + i)->name, &(add2 + i)->marks);
        fread(add2 + i, sizeof(st), 1, p);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + (add2 + i)->marks;
    }

    printf("The total sum of marks is: %d ", sum);
    fclose(p);
}