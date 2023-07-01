// Include necssary files and the library items we'll be using
#include "question3.h"
using std::cout; using std::cin; using std::endl;


// Main Program

// Prompt the user for an int value, validate the int value is in the range of 1 to 255, call the decimal_to_binary function, 
// save the result to a local variable, and output the result.  The program will run until the user opts to exit.


int main() {
    // define the input variable
    int n;

    // do whole look, keep accepting answers until the user enters 0
    do {
        cout<<"Enter a number between 1 and 255 (enter 0 to exit): ";

        // accept input and set to n
        cin>>n;

        // Validation: if the number entered is 0 exit the program
        if (n == 0) {
            break;
        } 
        
        // ensure the number is 1-255
        else if (n < 1 || n > 255) {
            cout<< "Invalid input. Please enter a number between 1 and 255.\n";
            continue;
        }

        // if the number is between 1-255 pass it into the binary conversion function
        string binary = decimal_to_binary(n);

        // output the binary
        cout<<"Binary representation: "<<binary<<endl;
    } while (n != 0);

    return 0;
}
