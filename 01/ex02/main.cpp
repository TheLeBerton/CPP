#include <iostream>

int main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* stringPtr = &str;
	std::string& stringRef = str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "stringPTR address: " << stringPtr << std::endl;
	std::cout << "stringREF address: " << &stringRef << std::endl;

	std::cout << "str value: " << str << std::endl;
	std::cout << "stringPTR value: " << *stringPtr << std::endl;
	std::cout << "stringREF value: " << stringRef << std::endl;
}
