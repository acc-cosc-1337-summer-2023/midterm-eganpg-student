#include "question3.h"
#include<algorithm>

// Implementation

// Write a string value return function decimal_to_binary that accepts an int parameter.  
// The function will convert an int value to its binary representation and returns the binary string value.

string decimal_to_binary(int n){
    string binary;
    while (n > 0) {
        binary.push_back((n % 2) + '0');
        n /= 2;
    }

    // reversing the string as we got the binary in reverse order
    std::reverse(binary.begin(), binary.end());

    // padding zeros to make it a byte (8 bits)
    while (binary.size() < 8) {
        binary = '0' + binary;
    }

    return binary;
}