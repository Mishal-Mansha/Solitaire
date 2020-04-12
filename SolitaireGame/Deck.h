#pragma once

#include "Card.h"
#include <iostream>

class Deck {
private:
	Card card;
	Deck* deck;
	Deck* top;
public:
	Deck();
	void push(Card card);
	int isEmpty();
	int peek();
	void pop();
	void display();

};
