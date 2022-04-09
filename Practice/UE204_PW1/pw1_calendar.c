#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isLeap(int year);
int getWeekday(int day, int month, int year);


int main() {
    int weekday, day, month, year;

    printf("Enter today's day, month and year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 1)
        month = 1;
    if (month > 12)
        month = 12;

    if (day < 1)
        day = 1;
    switch (month) {
        case 1: case 3:
        case 5: case 7:
        case 8: case 10:
        case 12:
            if (day > 31)
                day = 31;
            break;
        case 4: case 6:
        case 9: case 11:
            if (day > 30)
                day = 30;
            break;
        default: {
                int february = isLeap(year) ? 29 : 28;
                if (day > february)
                    day = february;
            }
            break;
    }

    weekday = getWeekday(day, month, year);

    printf("%02d/%02d/%04d Day of the week: %d\n", day, month, year, weekday);
    return 0;
}

bool isLeap(int year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int getWeekday(int day, int month, int year) {
    int century = year / 100;

    int yearShort = year % 100;
    if (month <= 2)
        yearShort--;

    month = (month + 10) % 12;
    if (month == 0)
        month = 12;

    int weekday = day + floor(2.6 * month - 0.2) - 2 * century + yearShort + yearShort / 4 + century / 4;
    weekday %= 7;
    if (weekday < 0)
        weekday += 7;
    return weekday;
}