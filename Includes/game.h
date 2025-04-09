#ifndef GAME_H
#define GAME_H

#include "deck.h"

typedef struct {
  Deck deck;
  Card player_cards[10];
  int player_card_count;
  Card dealer_cards[10];
  int dealer_card_count;
} Game;

void init_game(Game *game);
void display_game(const Game *game);
void player_hit(Game *game);
void dealer_play(Game *game);
int compute_score(Card *cards, int count);

#endif
