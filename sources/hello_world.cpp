
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	std::stringname; // Initialize variable name of type string
	std::cout << "Input user_name"; // Please enter a username
	std::cin >> name; // Request the value of the variable name from the I/O stream
	std::cout << "Hello world from " << name << std::endl; // Output greeting
	return 0;
}