#include <iostream>
#include <string>

int main()
{
	const int maxCharacters = 10;
	char word = ' ';
	char palArray[maxCharacters];

	std::cout << "Please enter your Palindrome: " << std::endl;
	std::cin >> word;

	for (int i = 0; i < maxCharacters; i++)
	{
		std::cout << palArray[i] << std::endl;
		//std::cout << "Index Position: [" << i << "]		Letter: [" << palindromeCheckArray[i] << "]" << std::endl;
	}

	system("Pause");
	return 0;
}