#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sec,min,hour,days;
    printf("Enter time in seconds:");
    scanf("%d",&sec);
    min=sec/60;
    hour=min/60;
    days=hour/24;
    printf("days=%d,hour=%d,minutes=%d",days,hour,min);
    return 0;
}