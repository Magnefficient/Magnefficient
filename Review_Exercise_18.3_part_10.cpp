// Review_Exercise_18.3_part_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


int main()
{
   
    double number;
        double decimal;
    string englishPartOfReal, decimalPartOfReal;
    cout << "enter a number that has a decimal place " << endl; 
    cin >> number;

    
    
    if (number >= 1.0 && number < 2.0) {
        englishPartOfReal = "One";

   }

    else if (number >= 2.0 && number < 3.0) {
        englishPartOfReal = "Two";
    }

    else if (number >= 3.0 && number < 4.0) {
        englishPartOfReal = "Three";
    }
    
    else   {
        englishPartOfReal = "Four";
    }

    if (number == (int)number) {
        decimalPartOfReal = "Zero";
        }
        if (number - .1 == (int)number ) {
            decimalPartOfReal = "One";
        }

        if (number - .2 == (int)number) {
            decimalPartOfReal = "Two";
        }

        if (number -.3  == (int)number) {
            decimalPartOfReal = "Three";
        }

        if (number - .4 == (int)number) {
            decimalPartOfReal = "Four";

        }

        if (number - .5 == (int)number) {
            decimalPartOfReal = "Five";
        }

        if (number - .6 == (int)number) {
            decimalPartOfReal = "Six";
        }

        if (number -.7 == (int)number) {
            decimalPartOfReal = " Seven ";
        }

        if (number - .8 == (int)number) {
            decimalPartOfReal = "Eight";
        }

        if (number - .9 == (int)number) {
            decimalPartOfReal = "Nine";
        }
        
    

    
    cout << englishPartOfReal << "." << decimalPartOfReal << endl; 
   // program succesfully converts  decimal number to word form 
    // it does this by guaranteeing that  the decimal portion is  changed to the whole number version by subtracting itself.

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
