#include "Deck.h"
#include "Card.h"
#include <iostream>
using namespace std;

Deck::Deck()
{

}

Deck::push(Card card){
    Deck * temp=new Deck();
    if(!temp) {
        cout << "Stack Overflow";       
    }

    temp->card = data;
    temp->deck = top;
    top = temp;

}
Deck::isEmpty()
{
    return top == NULL;
}
Deck::pop()
{
    Deck* temp;
    if (top == NULL)
    {
        cout << "Stack underflow";
    }
    else
    {
        temp = top;
        top = top->deck;
        free(temp);
    }
}

Deck::peek()
{
    if (!isEmpty())
        return top->card;
    else
        return;
}

