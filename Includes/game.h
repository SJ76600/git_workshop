#ifndef GAME_H
#define GAME_H

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
