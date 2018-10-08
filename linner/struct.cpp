#include <stdio.h>
#include <stdbool.h>

struct date{
    int month;
    int day;
    int year;
};

bool isLeap(struct date d);
int numberOfDays(struct date d);

int main(int argc, char const *argv[])
{
    struct date today,tomorrow;

    printf("Enter today's date (mm dd yyyy):");
    scanf("%i %i %i",&today.month,&today.day,&today.year);

    // today = (struct date){ 10, 4, 2018};
    struct date day;
    // day = today;
    struct date *pDate = &today;
    // struct date thisMonth = {.month=7, .year=2014};
    printf("today's date is %i-%i-%i\n",today.year,today.month,today.day);
    printf("address of today is %p\n",pDate);
    // printf("day's date is %i-%i-%i\n",day.year,day.month,day.day);
    // printf("today's date is %i-%i-%i\n",thisMonth.year,thisMonth.month,thisMonth.day);

    return 0;
}


