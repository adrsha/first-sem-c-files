#include <stdio.h>

int main()
{

    char a[20];
    int i, wl = 0, largest[2];
    printf("Enter the string.");
    scanf("%[^\n]s", &a);
    largest[0] = 0;
    for (i = 0; a[i] != NULL; i++)
    {

        wl++;
        if (a[i] == ' ')
        {
            if (largest[0] < wl)
            {
                largest[0] = wl - 1;
                largest[1] = i - wl + 1;
            }
            wl = 0;
        }
        printf("%d\n", largest[0]);
    }
    printf("Largest word is of length %d & is from index %d.", largest[0], largest[1]);

    return 0;
}