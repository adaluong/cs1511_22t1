// COMP1511 Tut03 - structs
// Ada Luong, March 2022

#include <stdio.h>

struct time {
    int hour;
    int minute;
    char meridian;
};

int main (void) {

    // declaring
    // int number;
    struct time wakeup_time; 
    // initialising
    wakeup_time.hour = 8;
    wakeup_time.minute = 10;
    wakeup_time.meridian = 'a';
    // printing the hour
    printf("the hour is: %d\n", wakeup_time.hour);
    printf("the time is now: %d:%d %cm\n", wakeup_time.hour, 
        wakeup_time.minute, wakeup_time.meridian);

    return 0;
}