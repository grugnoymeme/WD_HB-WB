#include <stdio.h>

int calculateDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    
    int century = year / 100;
    int yearOfCentury = year % 100;
    
    int h = (day + 13 * (month + 1) / 5 + yearOfCentury + yearOfCentury / 4 + century / 4 + 5 * century) % 7;
    
    // Convert the result to the corresponding day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, 3 = Tuesday, 4 = Wednesday, 5 = Thursday, 6 = Friday)
    return (h + 5) % 7;
}

int main() {
    int day, month, year;
    
    printf("Enter a date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);
    
    int dayOfWeek = calculateDayOfWeek(day, month, year);
    
    switch (dayOfWeek) {
        case 0:
            printf("Saturday\n");
            break;
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        default:
            printf("Invalid day of week\n");
            break;
    }
    
    return 0;
}
