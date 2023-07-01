#include "question2.h"

// Write the functions for the following implementation

// Implementation: 
// a) Write a function get_hours that returns an int and accepts an int seconds_since_1970 parameter
// b) Write a function get_minutes that returns an int and accepts an int seconds_since_1970 parameter
// c) Write a function get_seconds that returns an int and accepts an int seconds_since_1970 parameter

int get_hours(int seconds_since_1970) {

    // Change hours into seconds and use remainder to determine whole hours
    return (seconds_since_1970 / 3600) % 24;
}

int get_minutes(int seconds_since_1970) {

    // Change seconds into minutes and use remainder to determine whole minutes
    return (seconds_since_1970 / 60) % 60;
}

int get_seconds(int seconds_since_1970) {

    // Use remainder to determine whole seconds
    return seconds_since_1970 % 60;
}

int get_days(int seconds_since_1970)
{
    // change seconds into days
    return (seconds_since_1970 / 86400) % 365;
}
int get_years(int seconds_since_1970)
{
    return (seconds_since_1970 / 31536000);
}