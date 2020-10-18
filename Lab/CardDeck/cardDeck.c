#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 100
#define DECK_SIZE 12

unsigned long long genCard(void) {
	unsigned long long card = 0;

	return card;
}

void genCardDeck(unsigned long long* _deck, int* _isUsed) {

}

void printCard(unsigned long long card) {

}

void deckSwap(unsigned long long** _deckA, unsigned long long** _deckB) {
	unsigned long long* temp = *_deckA;
	*_deckA = *_deckB;
	*_deckB = temp;
}

void printDeck(unsigned long long** _deck) {
	if (_deck == NULL) return;

	for (int i = 0; i < DECK_SIZE; i++) {
		if (_deck[i] == NULL) continue;
		printf("#%d.", i);
		printCard(*_deck[i]);
	}
}

int main(void) {
	unsigned long long cards[NUM_CARDS] = { 0 };
	int isUsed[NUM_CARDS] = { 0 };

	unsigned long long* myDeck[DECK_SIZE] = { 0 };
	unsigned long long* comDeck[DECK_SIZE] = { 0 };

	for (int i = 0; i < NUM_CARDS; i++) {
		cards[i] = genCard();
	}

	printDeck(myDeck);

	return 0;
}