/*
 * File: card.h
 * ----------------
 * This file exports a card class representing a standard playing card, which
 * is identified by two components: a rank and a suit. The rank is stored as an
 * integer between 1 and 13 in which an ace is a 1, a jack is an 11, a queen is a
 * 12, and a king is 13. The suit is one of the four constants in the following
 * enumeration type:
 * 		enum Suit = { CLUBS, DIAMONDS, HEARTS, SPADES };
 * The Card class should export the following methods:
 * • A default constructor that creates a card that can later be assigned a value
 * • A constructor that takes a short string name like "10S" or "JD"
 * • A constructor that takes separate values for the rank and the suit
 * • A toString method that returns the short string representation of the card
 * • The getter methods getRank and getSuit
*/

#ifndef _card_h
#define _card_h

#include <string>
#include <iostream>

/* suit of card is enumerated and exported */
extern enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };
/* constatn names for ranks */
extern const int ACE;
extern const int JACK;
extern const int QUEEN;
extern const int KING;

/* class body */
class Card {

/* public section */
public:

/*
 * Constructor: Card
 * Usage: Card c(r, s);
 * ---------------------
 * each instance of card class have rank of a integer number from 1 to 13,
 * and suit type of enum Suit type.
 */
	Card(int r, Suit s);

/* Methods: getRank
 *			getSuit
 * Usage: int rank = c.getRank();
 *			Suit suit = c.getSuit();
 * ------------------------------
 * Returns the rank value or suit type of card c.
*/
	int getRank();
	Suit getSuit();

/* Method: toString
 * Usage: string str = c.toString();
 * -----------------------------------
 * Returns a string display the instance variables of card c.
*/
	std::string toString();

/* private section */
private:
	Suit suit;
	int rank;
};


/* free functions */

/*
 * Operator Overloading: ++ for enum Suit.
 * Usage: s++, ++s
 * ---------------
*/ 
Suit operator++(Suit & su);
Suit operator++(Suit & su, int);

/* Operator Overloding: << for class Card.
 * Usage: cout << c << endl;
*/
std::ostream & operator<<(std::ostream & os, Card car);

#endif
