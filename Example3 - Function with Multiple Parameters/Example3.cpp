#include <iostream>

// Declaration of the "PrintLetterAndNumber" function
void PrintLetterAndNumber(char letterToPrint, int numToPrint);

int main()
{
	// Call to the "PrintLetterAndNumber" function with a character parameter
	// of 'a' and an integer parameter of 1 passed in
	PrintLetterAndNumber('a', 1);

	return 0;
}

// Definition of the "PrintLetterAndNumber" function,
// this function takes in a char variable and an int variable and
// then prints each one separately.
void PrintLetterAndNumber(char letterToPrint, int numToPrint)
{
	std::cout << "letterToPrint: " << letterToPrint << std::endl;
	std::cout << "numToPrint: " << numToPrint << std::endl;
}