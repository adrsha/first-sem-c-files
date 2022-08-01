#include <stdio.h>
struct TIME
{
    int hrs;
    int min;
    int sec;
};

void add_sub(struct TIME, struct TIME, struct TIME *, struct TIME *);
int main()
{
    struct TIME t1, t2, sum, diff;
    printf("Enter the first time (hr, min, sec): ");
    scanf("%d%d%d", &t1.hrs, &t1.min, &t1.sec);
    printf("Enter the second time (hr, min, sec): ");
    scanf("%d%d%d", &t2.hrs, &t2.min, &t2.sec);

    add_sub(t1, t2, &sum, &diff);

    printf("Sum = %d hrs, %d mins, %d secs", sum.hrs, sum.min, sum.sec);
    printf("Difference = %d hrs, %d mins, %d secs", diff.hrs, diff.min, diff.sec);
}

void add_sub(struct TIME t1, struct TIME t2, struct TIME *sum, struct TIME *diff)
{
    long int t1_sec, t2_sec, add, sub;
    t1_sec = t1.sec + t1.min * 60 + t1.hrs * 3600;
    t2_sec = t2.sec + t2.min * 60 + t2.hrs * 3600;

    add = t1_sec + t2_sec;
    sub = t2_sec - t1_sec;

    sum->hrs = add / 3600;
    sum->min = (add % 3600) / 60;
    sum->sec = (add % 3600) % 60;

    diff->hrs = sub / 3600;
    diff->min = (sub % 3600) / 60;
    diff->sec = (sub % 3600) % 60;
}