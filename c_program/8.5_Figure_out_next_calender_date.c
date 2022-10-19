#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    int day;
    int month;
    int year; 
}date;

date set_date(int yyyy, int mo, int dd)
{
    // YYYY MM DD
    scanf("%d %d %d", &yyyy, &mo, &dd);
    
    date d;
    d.day = dd, d.month = mo, d.year = yyyy;
    return d;
}

int check_leap(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 400 != 0 && year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else 
        return 0;
}

date next(date d)
{
    int days_max;
    
    switch (d.month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                days_max = 31;
                break;

        case 4:
        case 6:
        case 9:
        case 11:
                days_max = 30;
                break;
            
        case 2:
                if (check_leap(d.year) == 1)
                    days_max = 29;
                else
                    days_max = 28; break;

        default:
                break;
    }
    
    if (d.day < days_max)
    {
        d.day ++;
    }
    else
    {
        if (d.day == days_max && d.month != 12)
        {
            d.day = 1;
            d.month ++;
        }
        else
        {
            if (d.month == 12)
            {
                d.month = 1;
                d.day = 1;
                d.year ++;
            }
        } }
    
    return d;
}

void print_date(date d)
{
    // YYYY MM DD
    printf("%04d %02d %02d\n", d.year, d.month, d.day);
    
    return;
}

int main() {
    
    int i, n;
    scanf("%d", &n);
    
    date list[n];
    
    for (i=0; i<n; i++)
    {
        list[i] = set_date(list[i].year, list[i].month, list[i].day);
    }
    
    for (i=0; i<n; i++)
    {
        list[i] = next(list[i]);
        print_date(list[i]);
    }
    
    return 0;
}