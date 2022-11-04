#include <iostream>

int main (){
	char character;
	std::cin >> character;
	
	static_cast<int>(character);
	character = character+32;
	static_cast<char>(character);
	std::cout << character << std::endl;

	return 0;

}
