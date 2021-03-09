// C4 P7 Default Arguments & Function Overloading
// The triple() function is used twice as an int & a string.

#include <iostream>
#include <string>

using namespace std;

int quadruple(int number); // single parm functions
string quadruple(string text);

int main()
{
	
	cout << "* * Default Arguments & Functions * *\n\n";
	
    // example of function call embedded in command
    cout << "\tQuadrupling 21: " << quadruple(21) << "\n\n";
    cout << "\tQuadrupling 'lol': " << quadruple("lol ");

    cout << "\n\n* End of Program *\n";
    return 0;
}

int quadruple(int number)
{
    return (number * 4);
}

string quadruple(string text)
{
    return (text + text + text + text);
}