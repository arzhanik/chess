#ifndef COORDINATES_H
#define COORDINATES_H

#include <string>


namespace Coordinates
{
class coordinates
{
public:
	coordinates(const std::string&, const std::string&);
	void set_coordinates(const std::string&, const std::string&);
	std::string get_coordinates() const;

private:
	std::string m_horizontal;
	std::string m_vertical;
};
}


#endif //Coordinates_H
