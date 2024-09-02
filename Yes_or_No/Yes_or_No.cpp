// Program "Yes or No"
// Demonstrates working with return values and parameters

#include <iostream>
#include <string>
#include <cctype>
char askYesNo1(); // just firt function
char askYesNo2(std::string question);

int main()
{
	char Answer1 = askYesNo1();
	std::cout << "Thanks for answering: " << Answer1 << "\n\n";
	char Answer2 = askYesNo2("Do you wish to save your game?");
	std::cout << "Thanks for answering: " << Answer2 << "\n";

	return 0;
}
const char yes = 'y';
const char no = 'n';

char askYesNo1()
{
	char Response1;
	do
	{
		std::cout << "Please enter 'y' or 'n': ";
		std::cin >> Response1;

		Response1 = tolower(Response1); // Convert to lowercase for comparison

	} while (Response1 != yes && Response1 != no);
	return Response1;
}

char askYesNo2(std::string question)
{
	char Response2;
	do
	{
		std::cout << question << " (y/n): ";
		std::cin >> Response2;

		Response2 = tolower(Response2); // Convert to lowercase for comparison

	} while (Response2 != yes && Response2 != no);
	return Response2;
}
