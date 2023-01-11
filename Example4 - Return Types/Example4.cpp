#include <iostream>

// Declaration of the "AddTwoNumbersReturnResult" function
float AddTwoNumbersReturnResult(float firstNumber, float secondNumber);

int main()
{
	// Call the "AddTwoNumbersReturnResult" function and store the result as a float variable
	float result = AddTwoNumbersReturnResult(4.4, 6.5);

	// Print the result of the function
	std::cout << "AddTwoNumbersReturnResult returned a value of: " << result << std::endl;

	return 0;
}

// Definition of the "AddTwoNumbersReturnResult" function. This function requires
// two float parameters to be passed in, adds them together and returns the
// resulting float value.
float AddTwoNumbersReturnResult(float firstNumber, float secondNumber)
{
	return firstNumber + secondNumber;
}