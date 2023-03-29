#include<stdio.h>
char *day_of_week(int);
int main()
{
    int day_num;
    char *day;
    printf("\n enter the day form 1 to 7:");
    scanf("%d",&day_num);
    day = day_of_week(day_num);
    if (day)
        printf("%s", day);
    else
        printf("\n invalid day");
}
char *day_of_week(int d)
{
    int day;
    char *week_day[7] = {"SUNDAY", "MONDAY", "TUESDAY", "WENSDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
    if(day>=1 || day<=7)
        return week_day[d-1];
    else
        return NULL;
}
