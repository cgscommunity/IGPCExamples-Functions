#include <iostream>

// Function definition for "IsInRange" takes in three const int parameters
// and returns a constant boolean value
const bool IsInRange(const int& value, const int& min, const int& max);

int main()
{
	// Call the "IsInRange" function passing in 3 integers and store the
	// result in a const bool value called bResult.
	const bool bResult = IsInRange(5, 0, 10);

	// Check if bResult is true or false and print out the appropriate message
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

// Function Declaration for "IsInRange"
const bool IsInRange(const int& value, const int& min, const int& max)
{
	// Check if the value passed in is within the range set by the min
	// and max values and then return true or false accordingly
	if (value > min && value < max)
	{
		return true;
	}
	else
	{
		return false;
	}
}