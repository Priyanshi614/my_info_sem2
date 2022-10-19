#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    int day;
    int month;
    int year; 
    int hrs;
    int min;
    int sec;
}date;

date set_date(int yyyy, int mo, int dd, int hh, int mm, int ss)
{
    // YYYY MM DD HH MM SS
    scanf("%d %d %d %d %d %d", &yyyy, &mo, &dd, &hh, &mm, &ss);
    
    date d;
    d.day = dd, d.month = mo, d.year = yyyy, d.hrs = hh, d.min = mm, d.sec = ss;
    return d;
}

short is_later(date date1, date date2)
{
    if (date1.year > date2.year)
        return 1;
    else if (date1.year < date2.year)
        return 0;
    else
    {
        if (date1.month > date2.month)
            return 1;
         else if (date1.month < date2.month)
            return 0;
        else
        {
            if (date1.day > date2.day)
                return 1;
            else if (date1.day < date2.day)
                return 0;
            else
            {
                if (date1.hrs > date2.hrs)
                    return 1; else if (date1.hrs < date2.hrs)
                    return 0;
                else
                {
                    if (date1.min > date2.min)
                        return 1;
                    else if (date1.min < date2.min)
                        return 0;
                    else
                    {
                        if (date1.sec > date2.sec)
                            return 1;
                        else if (date1.sec < date2.sec)
                            return 0;
                    }
                }
            }
        }
    }
    
    return 0;
}

void sort_dates(date dates[], int n)
{
    int i, j;
    date temp;
    
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (is_later(dates[j], dates[j+1]) == 1)
            {
                temp = dates[j];
                dates[j] = dates[j+1];
                dates[j+1] = temp;
            }
        }
    }  return;
}

void print_date(date d)
{
    // DD/MM/YYYY HH:MM:SS
    printf("%02d/%02d/%04d %02d:%02d:%02d\n", d.day, d.month, d.year, d.hrs, d.min, d.sec);
    
    return;
}

int main() {
    
    int i, n;
    scanf("%d", &n);
    
    date list[n];
    
    for (i=0; i<n; i++)
    {
        list[i] = set_date(list[i].year, list[i].month, list[i].day, list[i].hrs, list[i].min, list[i].sec);
    }
    
    sort_dates(list, n);
    
    printf("%d\n", n);
    
    for (i=0; i<n; i++)
    {
        print_date(list[i]);
    }
    
    return 0;
}