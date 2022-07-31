#include <stdio.h>
struct time
{
    int hr, min, sec;
};
void calc(struct time *, struct time *, int *, int *);
int main()
{
    struct time t1, t2, add, substract;
    int s, d;

    printf("Enter the starting time (T1) and ending time (T2) in hour minute and seconds\n");
    scanf("%d%d%d%d%d%d", &t1.hr, &t1.min, &t1.sec, &t2.hr, &t2.min, &t2.sec);

    calc(&t1, &t2, &s, &d);
    add.hr = s / 3600;
    add.min = (s % 3600) / 60;
    add.sec = (s % 60) % 60;
    substract.hr = d / 3600;
    substract.min = (d % 3600) / 60;
    substract.sec = (d % 60) % 60;

    printf("The sum is \n %dhr %d min %d sec and The difference is\n %dhr %dmin and %d sec", add.hr, add.min, add.sec, substract.hr, substract.min, substract.sec);

    return 0;
}

void calc(struct time *x, struct time *y, int *sum, int *diff)
{
    int total1, total2;
    total1 = x->hr * 3600 + x->min * 60 + x->sec;
    total2 = y->hr * 3600 + y->min * 60 + y->sec;
    *sum = total1 + total2;
    *diff = total1 - total2;
}