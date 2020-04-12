#include "Card.h"
#include <cstddef>

Card::Card()
{
	face = NULL;
	suit = NULL;
}

Card::Card(char f, char s)
{
	face = f;
	suit = s;
}

char Card::getFace()
{
	return face;
}

char Card::getSuit()
{
	return suit;
}
