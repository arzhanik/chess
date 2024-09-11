#include <iostream>
#include "Coordinates.h"

int main() {
	Coordinates::coordinates coor = Coordinates::coordinates("horizontal", "vertical");
	std::string myStr = coor.get_coordinates();
	char spacePosition = myStr.find(' ');
	std::string firstString = myStr.substr(0, spacePosition);
	std::string secondString = myStr.substr(spacePosition + 1);	
	std::cout << firstString << "\n" << secondString << std::endl;
}
