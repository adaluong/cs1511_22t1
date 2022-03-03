// COMP1511 Tut03 - structs
// Ada Luong, March 2022

#include <stdio.h>

// defining a struct
struct time {
    int hour;
    int minute;
    char meridian;
};

struct coordinates {
    int x_coord;
    int y_coord;
};

// int -> this stores 8 bits!

int main (void) {

    // declare a struct
    // int counter = 0;
    struct time wakeup_time;
    // struct time central_train_departure;

    // initialising a struct
    wakeup_time.hour = 8;
    wakeup_time.minute = 59;
    wakeup_time.meridian = 'a';

    // printing
    printf("wake up time hour is: %d\n", wakeup_time.hour);
    printf("time is: %d:%d %cm\n", wakeup_time.hour, 
        wakeup_time.minute, wakeup_time.meridian);

    return 0;
} 