#include "question1.h"

// Define the function as a vector containing double

vector<double> get_cookie_ingredients(int cookies) {

    // Define the ingredients of the cookies as double
    
    double base_cookies = 48.0;
    double base_sugar = 1.5;
    double base_butter = 1.0;
    double base_flour = 2.75;

    // calculate the amount of a specific ingredient
    
    double sugar = (cookies / base_cookies) * base_sugar;
    double butter = (cookies / base_cookies) * base_butter;
    double flour = (cookies / base_cookies) * base_flour;

    // place the the ingredients in a vector
    
    vector<double> ingredients = {sugar, butter, flour};

    // return vector
    
    return ingredients;
}