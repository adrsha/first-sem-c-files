#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp1, *fp2;
    char yon;
    char sfname[20];
    char dfname[20];
    char holder[50];
    printf("Do you want to create the source file? (y/n)");
    scanf("%c", &yon);
    if (yon != 'n')
    {
        printf("\nEnter the name of your new file.");
        scanf("%s", &sfname);
        printf("\nEnter the data you want on your source file.");
        yon = 'y';
        fp1 = fopen(sfname, "w");
        while (yon != 'n')
        {
            gets(holder);
            fprintf(fp1, "%s", holder);
            printf("Continue? (y/n) ");
            scanf(" %c", &yon);
            printf("%c", yon);
        }
    }
    else
    {
        printf("Enter the path of the file to copy.");
        gets(&sfname);
    }

    printf("Enter the path of the file to which we need to copy.");
    gets(&dfname);

    fp1 = fopen(sfname, "r");
    fp2 = fopen(dfname, "w");

    while (fscanf(fp1, "%s", holder) != EOF)
    {
        fgets(holder, sizeof(holder), fp1);
        fprintf(fp2, "%s", holder);
    }

    fclose(fp1);
    fclose(fp2);
}