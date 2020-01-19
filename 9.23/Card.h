#pragma once
#include <array>

class Card
{
public:
	explicit Card(size_t face, size_t suit);
	std::string toString(void) const;

	static const std::array<std::string, 4> suitStrings;
	static const std::array<std::string, 13> faceStrings;

private:
	size_t face;
	size_t suit;
};

