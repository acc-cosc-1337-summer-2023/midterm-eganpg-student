#include "question4.h"
#include<iostream>
using std::to_string;

// In the cpp file, write the code to return the factorial sequence for the int parameter value.

// define the function and accept a passed variable num

string get_factorial_sequence(int num)
{
    // define sequence variable as string and set to empty
    string seq = "";
    // instantiate result as int and set to 1
    int result = 1;

    // while the loops is < num continue the loop
    for(int i = 1; i <= num; ++i) {
        // begin calculating the result for the last part of teh string
        result *= i;

        // convert int to string
        seq += to_string(i);

        // for each number up to num, add a string x to indicate multiply in the returned string
        if(i != num) {
            seq += "x";
        } 
        
        // after the last num enter a = sign and append the result
        else {
            seq += "=" + to_string(result);
        }
    }

    // return the string sequence

    return seq;
}