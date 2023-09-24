#include<stdio.h>
#include<time.h>

int main()
{
    // Get the current time
    time_t current_date = time(NULL);
    clock_t current_time = time(NULL);
    // Convert the time to a string using the desired format
    char date_string[20];
    char time_string[20];

    char colors[30] = "^b#d3869b^^c#282828^   ";


    strftime(date_string, 20, "%Y-%m-%d", localtime(&current_date));
    strftime(time_string, 20, "%I:%M", localtime(&current_date));

    // Print the date string
    printf("%s%s [%s]\n", colors, date_string, time_string);
}
