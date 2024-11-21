#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int week_day(int year, int month, int day)	//the function which converts date to week *will return 0 for Sunday
{
    if (month == 1 || month == 2) month += 12, year--;	//process the special cases for Jan and Feb
    return (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;	//the Kim larsen calculation formula!
}
int main()
{
    int year_len = 0;
    scanf("%d", &year_len);
    int count[7] = { 0 };	//what else can I explain/.
    for (int current_year = 1900; current_year < 1900 + year_len; current_year++)
        for (int current_month = 1; current_month <= 12; current_month++)
            count[week_day(current_year, current_month, 13)]++;
    printf("%d %d %d %d %d %d %d", count[6], count[0], count[1], count[2], count[3], count[4], count[5]);
    //remember to pay attention to the cout format
    return 0;
}