#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int leap_year(int y)
{
    if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
    {
        return 1;
    }
    else
        return 0;

}



int main()
{
    for (int year = 1000; year <= 2000; year++)
    {
        if( leap_year(year))
            printf("ÈòÄêÊÇ:%d ", year);
    }

    return 0;
}




