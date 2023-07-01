#include<iostream>
#include "question1.h"
using std::cout; using std::cin; using std::endl;

int main()
{
    // define the variables holding the number of cookies and the choice of whether to continue or exit
    int cookies;
    char choice;

    // in a loop ask the user how many cookies they would like to bake
    
    do {
        cout<<"Enter the number of cookies you want to bake: ";
        
        // accept the number of cookies
        cin>>cookies;
        
        // use the function to run the calculation
        vector<double> ingredients = get_cookie_ingredients(cookies);
        
        // output the ingredients
        cout<<"\nCups of Sugar: "<<ingredients[0]
            <<"\nCups of Butter: "<<ingredients[1]
            <<"\nCups of Flour: "<<ingredients[2]
            <<endl;
        
        // ask the user if theuy want to continue
        cout<<"\nDo you want to continue? (Y/N): ";

        // Output choice for confirmation
        cin>>choice;

        // continue until the user says something other than Y or y
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}