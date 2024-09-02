// Program "Yes or No"
// Demonstrates working with return values and parameters

#include <iostream>
#include <string>
char askYesNo1();
char askYesNo2(std::string question);

int main()
{
	char Answer1 = askYesNo1();
	std::cout << "Thanks for answering" << Answer1 << "\n\n";
	char Answer2 = askYesNo2("Do you wish to save your game?");
	std::cout << "Thanks for answering: " << Answer2 << "\n";

	return 0;
}



char askYesNo1()
{
	char Response1;
	do
	{
		std::cout << "Please enter 'y' or 'n': ";
		std::cin >> Response1;
	} while (Response1 != 'y' && Response1 != 'n');
	return Response1;
}

char askYesNo2(std::string question)
{

}
