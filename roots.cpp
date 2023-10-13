#include <iostream>
#include <cmath>

using namespace std;

/*--------------------------------------------------------------
 Programmer: Amy Saad
 Due Date: September 9th, 2022
 
 Summary: This program takes the input for three coefficients from the user; A, B, and C.
 The programs then calculates the discriminant (D), and uses the users input to calculate the roots
 using the quadratic formula.
 
 Date last modified:
 Sept 1, 2022 (as): began program
 Sept 2, 2022 (as): continued working on program, learned discriminant
 Sept 4, 2022 (as): if else statements
 Sept 6, 2022 (as): print statements
 Sept 7, 2022 (as): final adjustments
 
 //all comments describe the statement below it
 
 ----------------------------------------------------------------*/

int main()
{
    
    // coefficients 'A', 'B', & 'C' for quadratic equation
    // a variable 'D' for the discriminant
    
    double  A;
    double  B;
    double  C;
    double  D;

    // asks the user to input A, B, & C
    
    cout << ("Enter a number for A: ") << endl;
    cin >> A;
    cout << ("Enter a number for B: ") << endl;
    cin >> B;
    cout << ("Enter a number for C: ") << endl;
    cin >> C;

    cout << endl;

    // formula for the discriminant
    
    D = (B * B) - (4*A*C);

    
    // root one & two
    
    double rootONE;
    double rootTWO;
    
    // this first if statement below returns the following print statement when an input of 0 is typed in for A
    // you can't divide by 0, and theres a division in the equation that we don't want divided by zero
    // although A can't be zero, as long as B and C are above 0, the next if statement continues the calculation

    if (A == 0) {
        cout << "Your coefficient for 'A' makes this not a quadratic equation." << endl;
            }
        if (B > 0 and C > 0) {
            rootONE = -(C) / B;
            cout << endl << "Your coefficients resulted in a linear equation that crosses the x-asis at: x = " << rootONE << endl;
        }
    
    // this next if statement below is the programs response if the user enters 0 for all coefficients
    // this leads to an infinite number of roots.
    
            if (A == 0 and B == 0 and C == 0) {
                cout << "Your coefficients resulted in an infinite number of roots." << endl;
                
    // this else if statement below is the programs output when the discriminant is above 0
    // this else if statement also includes if the user doesn't input A as 0
                
            }
            else if (D > 0 and A != 0) {
                rootONE = (-B + sqrt(D)) / (2*A);
                rootTWO = (-B - sqrt(D)) / (2*A);
                cout << ("The roots are real.") << endl;
                cout << "Root One is: " << rootONE << endl;
                cout << "Root Two is: " << rootTWO << endl;
                }
    
    // this else if statement below is the programs output when the discrimminant is 0,
    // and the user did not input 0 for A
    // this makes the roots real, and the same number
    
            else if (D == 0 and A != 0) {
                rootONE = (-B + sqrt(D)) / (2*A);
                cout << "The roots are real and equal. The Root is: " << rootONE << endl;
                }
    
    //any other condition that is not included in the top else if statements will output
    // this statement. all other conditions are taken care of above
    
            else  {
                cout << ("\nThe roots are not real. The discriminant is negative.") << endl;
                }

    cout << endl << "----------------------- Done -----------------------" << endl << endl;

    return 0;

} // main
