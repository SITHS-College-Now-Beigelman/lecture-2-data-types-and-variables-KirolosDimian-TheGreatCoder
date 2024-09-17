// Kirolos Dimian
// Lecture 2
// 9/16/24

#include <iostream>
#include <string>
using namespace std;

int main () // Creating the variables
{
    int TheGreatNumeral = 42; // Integer
    float TheGreatFloat = 83.92; // Float
    double TheGreatDouble = 2.34; // Double
    char TheGreatLetter = 'D'; // Character
    bool TheGreatBool = false; // Boolean
    string TheGreatString = "Luigi"; // String

    // To print the variable
    cout << "int:" <<TheGreatNumeral << endl; // To print the integer
    cout << "float:" <<TheGreatFloat << endl; // To print the float
    cout << "double:" <<TheGreatDouble << endl; // To print the double
    cout << "char:" <<TheGreatLetter << endl; // To print the letter
    cout << "bool:" <<TheGreatBool << endl; // To print the boolean
    cout << "string:" <<TheGreatString << endl; // To print the string

    // Include code from slide 37 (Only variables and arithmetic).
    int inches; // variable to store total inches
    inches = 100; // Store 100 in the variable inhches

    //To make a print statement
    cout << inches << " Inch(es) = "; // output the value of inches and the equal sign
    cout << inches / 12 << " feet (foot) and "; // output maximum number of feet (foot)
    cout << inches % 12 << "inch(es)" << endl; // output remaining inches

    // Comparison
    char FirstChar = 'D'; // Declaring the first character
    char SecondChar = 'R'; // Declaring the second character

    // To print the comparison
    cout << "D > R = " << (FirstChar > SecondChar) << endl; // To print and do the 'char' expression
    
    // Preforming Expressions 
    cout << "2 + 3.5 = " << 2 + 3.5 << endl; // To print and do the first expression
    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 << endl; // To print and do the second expression
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl; // To print and do the thrid expression
    
    return 0;
}