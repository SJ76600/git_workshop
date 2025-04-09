#ifndef CARD_H
#define CARD_H

#include <stdio.h>

typedef enum {
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES
  } Suit;

typedef struct {
    int value;
    Suit suit;
} Card;

void print_card(const Card *card);

#endif
