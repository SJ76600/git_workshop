#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <stdlib.h>
#include <time.h>

#ifndef DECK_SIZE
  #define DECK_SIZE 52
#endif

typedef struct {
  Card cards[DECK_SIZE];
  int top;
} Deck;

void init_deck(Deck *deck);
void shuffle_deck(Deck *deck);
Card draw_card(Deck *deck);

#endif
