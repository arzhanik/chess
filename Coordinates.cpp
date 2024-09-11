#include "Coordinates.h"

Coordinates::coordinates::coordinates(const std::string& horizontal, const std::string& vertical)
	: m_horizontal { horizontal }
	, m_vertical { vertical }
{}

void Coordinates::coordinates::set_coordinates(const std::string& horizontal, const std::string& vertical)
{
	m_horizontal = horizontal;
	m_vertical = vertical;
}

std::string Coordinates::coordinates::get_coordinates() const 
{
	return (m_horizontal + ' ' + m_vertical);
}
