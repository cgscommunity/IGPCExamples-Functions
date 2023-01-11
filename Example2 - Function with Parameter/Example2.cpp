#include <iostream>

// Declaration for the "PrintIntParameter" function, this function requires a single integer parameter
void PrintIntParameter(int numToPrint);

int main()
{
	// Call the "PrintIntParamter" function and pass it an integer value of 5 as a parameter
	PrintIntParameter(5);

	return 0;
}

// Definition for the "PrintIntParameter function, prints the value passed as a parameter
void PrintIntParameter(int numToPrint)
{
	std::cout << "numToPrint: " << numToPrint << std::endl;
}