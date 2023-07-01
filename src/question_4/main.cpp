// include to support cin / cout

#include <iostream>
#include "question4.h"

// using standard libary
using std::cin; using std::cout;

int main() {

    // create variable num to hold user input
    int num;

    // until the user exits keep accepting numbers
    do {
        // prompt user to enter number between 1 and 10
        cout<<"Enter a number between 1 and 10 (enter 0 to quit): ";

        // accept input and set to num
        cin>>num;

        // if the number is outside of the range 1-10 error and ask for new number
        if(num < 0 || num > 10) {
            cout << "Invalid input. Please try again.\n";
        } 
        
        // otherwise call the sequence creation function and build 
        else if(num != 0) {
            string sequence = get_factorial_sequence(num);

            //output the string
            cout<<"Factorial sequence: "<<sequence<<"\n";
        }
    } while(num != 0);

    return 0;
}