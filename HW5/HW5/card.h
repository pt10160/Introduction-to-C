/*
 * card.h
 *
 *  Created on: Jun 6, 2018
 *      Author: ehogan28
 */

#ifndef CARD_H_
#define CARD_H_

struct Card{
	char suit[4];
	char rank[13];
};

void fillDeck(struct Card Deck[],int suitMax,int rankMax,int deckSize);
void printDeck(struct Card Deck[],int deckSize);
void shuffle(struct Card Deck[],int deckSize);
void printCard(struct Card c);
void printHand(struct Card Deck[]);
void doHands(struct Card Deck[],int deckSize);

#endif /* CARD_H_ */
