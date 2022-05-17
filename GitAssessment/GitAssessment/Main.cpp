#include <iostream>

int main() {

	// Display messages explaining what this file is for.
	std::cout << "Hello, Git!" << std::endl;
	std::cout << "This is a file for practicing how to use Git." << std::endl;

	std::cout << std::endl;
	// Prints all of the letters in lowercase.
	std::cout << "Printing all the letters of the alphabet (Lowercase):" << std::endl;
	for (int i = 0; i < 26; i++) {
		std::cout << (char)(97 + i);
	}
	std::cout << std::endl;

	// Prints all of the letters in uppercase.
	std::cout << std::endl;
	std::cout << "Prints all letters in the alphabet (Uppercase):" << std::endl;
	for (int i = 0; i < 26; i++) {
		std::cout << (char)(65 + i);
	}
	std::cout << std::endl;

	std::cout << "Press enter to quit" << std::endl;
	std::cin.get();

	return 0;
}