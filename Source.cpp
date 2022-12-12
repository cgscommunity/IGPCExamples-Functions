#include <iostream>

// Function Declarations
void PrintHello();
void PrintIntParameter(int numToPrint);
void PrintLetterAndNumber(char letterToPrint, int numToPrint);
float AddTwoNumbersReturnResult(float firstNumber, float secondNumber);
void IncrementByOne(int& numToIncrement);
const bool IsInRange(const int& value, const int& min, const int& max);

int main()
{
	// Call PrintHello() function
	PrintHello();

	// Call PrintIntParameter() function
	PrintIntParameter(5);

	// Call PrintLetterAndNumber() function
	PrintLetterAndNumber('a', 1);

	// Call AddTwoNumbersReturnResult() function and store result as a float
	float result = AddTwoNumbersReturnResult(4.4, 6.6);

	// Call IncrementByOne() function and print i after passing it by reference
	int i = 0;
	IncrementByOne(i);
	std::cout << "Increment i is: " << i << std::endl;

	// Call IsInRange() and, based on the result, print yes or no to the console
	const bool bResult = IsInRange(5, 0, 10);
	if (bResult)
	{
		std::cout << "IsInRange() returned true!" << std::endl;
	}
	else
	{
		std::cout << "IsInRange() returned false!" << std::endl;
	}

	return 0;
}

// Function Definition
// Function name: PrintHello
// Parameters: none
// Logic: Prints the world "Hello" to the console
// Return type: void (does not return any data)
void PrintHello()
{
	std::cout << "Hello!\n";
}

// Function Definition
// Function name: PrintIntParameter
// Parameters: An integer value
// Logic: Prints out the integer parameter to the console
// Return type: void (does not return any data)
void PrintIntParameter(int numToPrint)
{
	std::cout << "numToPrint: " << numToPrint << std::endl;
}

// Function Definition
// Function name: PrintLetterAndNumber
// Parameters: A character value and an integer value
// Logic: Prints out the two parameters entered to the console
// Return type: void (does not return any data)
void PrintLetterAndNumber(char letterToPrint, int numToPrint)
{
	std::cout << "letterToPrint: " << letterToPrint << std::endl;
	std::cout << "numToPrint: " << numToPrint << std::endl;
}

// Function Definition
// Function name: AddTwoNumbersReturnResult
// Parameters: Two float values
// Logic: Adds the two parameters together and returns the result
// Return type: float
float AddTwoNumbersReturnResult(float firstNumber, float secondNumber)
{
	return firstNumber + secondNumber;
}

// Function Definition
// Function name: IncrementByOne
// Parameters: An integer reference
// Logic: Increments the referenced integer parameter by one
// Return type: void (does not return any data)
void IncrementByOne(int& numToIncrement)
{
	++numToIncrement;
}

// Function Definition
// Function name: IsInRange
// Parameters: Three constant integer references
// Logic: Checks if the value entered is within the min and max range entered
// Return type: boolean
const bool IsInRange(const int& value, const int& min, const int& max)
{
	if (value > min && value < max)
	{
		return true;
	}
	else
	{
		return false;
	}
}