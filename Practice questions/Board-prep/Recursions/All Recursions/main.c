#include <stdio.h>
#include <math.h>
#include <string.h>

int factorial(int);
int hcf(int, int);
int lcm(int, int);
int revn(int, int);
int numOdigits(int, int);
int armstrong(int, int);
float sin_series(float, float);
char reverse(char[], int i);

int main()
{

    int a;
    char j;
    while (j != 'y')
    {
        printf("\e[1;31mThe following are your options:\n");
        printf("\e[1;33m1-Factorial \t 2-HCF \t 3-LCM \t 4-Palindrome(Numbers) \t 5-Armstrong \t 6-Sum of sin series \t 7-Reverse(Characters)\n");
        printf("\e[1;32mChoose:\e[0m");
        scanf("%d", &a);
        if (a == 1)
        {
            int n;
            printf("\nEnter the Number to calculate the factorial of: ");
            scanf("%d", &n);
            printf("Your factorial is: %d", factorial(n));
        }
        else if (a == 2)
        {
            int m, n;
            printf("\nEnter the Numbers to calculate the HCF of: ");
            scanf("%d%d", &m, &n);
            printf("Your HCF is: %d", hcf(m, n));
        }
        else if (a == 3)
        {
            int m, n;
            printf("\nEnter the Numbers to calculate the LCM of: ");
            scanf("%d%d", &m, &n);
            printf("Your LCM is: %d", lcm(m, n));
        }
        else if (a == 4)
        {
            int n;
            printf("\nEnter the Number to check if its a Palindrome: ");
            scanf("%d", &n);
            if (n == revn(n, 0))
            {
                printf("Yup, it is a palindrome.");
            }
            else
            {
                printf("Nope, its not a palindome.");
            }
        }
        else if (a == 5)
        {
            int n;
            printf("\nEnter the Number to check if it's an armstrong number: ");
            scanf("%d", &n);
            if (n == armstrong(n, 0))
            {
                printf("Yup, it is an Armstrong number.");
            }
            else
            {
                printf("Nope, its not an Armstrong number.");
            }
        }
        else if (a == 6)
        {
            float n, x;
            printf("\nEnter the value of x and n to calculate the Sin series: ");
            scanf("%f %f", &x, &n);
            printf("Your sum is: %f", sin_series(x, n));
        }
        else if (a == 7)
        {
            char m[10];
            printf("\nEnter the word to reverse: ");
            scanf("%s", m);
            printf("The reverse is: %s", reverse(m, 0));
        }
        printf("\n\e[1;31mExit now? (y/n): ");
        scanf(" %c", &j);
    }
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int hcf(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return hcf(b, a % b);
    }
}
int lcm(int a, int b)
{
    return a * b / hcf(a, b);
}
int revn(int n, int t)
{
    if (n == 0)
    {
        return t;
    }
    else
    {
        t = t * 10 + n % 10;
        n = n / 10;
        return revn(n, t);
    }
}
int numOdigits(int n, int t)
{
    if (n == 0)
    {
        return t;
    }
    else
    {
        t++;
        n = n / 10;
        return revn(n, t);
    }
}
int armstrong(int n, int t)
{
    if (n == 0)
    {
        return t;
    }
    else
    {
        t = t + (n % 10) * (n % 10) * (n % 10);
        n = n / 10;
        return armstrong(n, t);
    }
}
float sin_series(float x, float n)
{
    // x - x^3/3! + x^5/5! - x^7/7!..
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return ((pow(-1, n + 1) * pow(x, 2 * n - 1) / factorial(2 * n - 1)) + sin_series(x, n - 1));
    }
}
char reverse(char a[], int i)
{
    char t;
    if (i == strlen(a) / 2)
    {
        return a;
    }
    else
    {
        t = a[i];
        a[i] = a[strlen(a) - 1 - i];
        a[strlen(a) - 1 - i] = a[i];
        return (a, i + 1);
    }
}
