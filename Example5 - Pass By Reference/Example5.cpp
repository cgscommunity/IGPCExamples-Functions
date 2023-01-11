#include <iostream>

void NormalIncrement(int numToIncrement);
void PassByReferenceIncrement(int& numToIncrement);

int main()
{
	// Create an integer variable and initialise to 0
	int i = 0;

	// Call to "NormalIncrement" passing in the value of i
	NormalIncrement(i);

	// Print out the value of i after "NormalIncrement"
	std::cout << "i after NormalIncrement: " << i << std::endl;

	// Call to "PassByReferenceIncrement" passing in a reference to i
	PassByReferenceIncrement(i);

	// Print out the value of i after "PassByReferenceIncrement"
	std::cout << "i after PassByReferenceIncrement: " << i << std::endl;
}

// Definition of "NormalIncrement", takes in a reference
void NormalIncrement(int numToIncrement)
{
	++numToIncrement;
}

// Defition of "PassByReference" increment, takes in a reference to an integer
void PassByReferenceIncrement(int& numToIncrement)
{
	++numToIncrement;
}