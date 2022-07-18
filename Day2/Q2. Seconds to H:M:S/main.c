#include <stdio.h>
#include <math.h>
// to convert seconds into minutes and seconds
int main()
{
    int sec, conv_sec, conv_min, conv_hours;
    printf("input a certain ammount of seconds.");
    scanf("%d", &sec);
    conv_hours = (sec / 3600);
    conv_sec = sec % 60;
    conv_min = (sec / 60) % 60;
    printf("%dhrs:%dmins:%dsec", conv_hours, conv_min, conv_sec);
    return 0;
}
