#include <iostream>
#include <string>

int main()
{
	//const int MAX = 10;
	std::string array[]={"H","A","N","N","A","H"};
	std::string word = "";
	std::string newWord = "";


	for (int i = 0; i < 6; i++)
	{
		std::cout << array[i] << std::endl;
		word += array[i];
	}

	std::cout << "" << std::endl;

	for (int i = 6-1; i >= 0; i--)
	{
		std::cout << array[i] << std::endl;
		newWord += array[i];
	}

	if (word == newWord)
	{
		std::cout << "The words " << word << " and " << newWord << " are classified as Palindromes." << std::endl;
	}
	else
	{
		std::cout << "negative" << std::endl;
	}

	system("Pause");
	return 0;
}
