#include "question2.h"
using std::cout;

// Main program flow: 
// No loop.  Use provided seconds since 1970 value as argument to get_hours, get_minutes, and get_seconds function accordingly and display the time.
// As defined in the question: 1570846218

int main()
{
    // Call the functions with a specific value as definted in the question
    int seconds_since_1970 = 1570846218; 

    // Testing with other variable as seconds from 1970 jan 1 as defined by google
    // int seconds_since_1970 = 1688083205;

    // Adding Years and Days to the output in order to provide clarity to the question. 

    // Notes: the provided number of seconds does not appear to the correct number of seconds from 1970 however I understand this question may be from years prior.
    cout<<"Years: "<< get_years(seconds_since_1970)<<'\n';
    cout<<"Days: "<< get_days(seconds_since_1970)<<'\n';

    // As requested in the question here are the 3 outputs.
    cout<<"Hours: "<< get_hours(seconds_since_1970)<<'\n';
    cout<<"Minutes: "<<get_minutes(seconds_since_1970)<<'\n';
    cout<<"Seconds: "<< get_seconds(seconds_since_1970)<<'\n';

    return 0;
}