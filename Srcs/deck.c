#include "deck.h"

/*
 * Le deck doit être initialisé avec exactement 52 cartes pour le jeu de base.
 */
void init_deck(Deck *deck) {
    int index = 0;
    for (int s = HEARTS; s <= SPADES; s++) {
        for (int v = 1; v <= 13; v++) {  // 1 = As, 11 = Valet, 12 = Dame, 13 = Roi
            deck->cards[index].suit = s;
            deck->cards[index].value = v;
            index++;
        }
    }
    deck->top = 0;
    // TODO: Vérifier que le nombre de cartes initialisé est bien égal à DECK_SIZE (52)
}

void shuffle_deck(Deck *deck) {
    srand((unsigned int) time(NULL));
    for (int i = 0; i < DECK_SIZE; i++) {
        int j = rand() % DECK_SIZE;
        Card temp = deck->cards[i];
        deck->cards[i] = deck->cards[j];
        deck->cards[j] = temp;
    }
    deck->top = 0;
    // TODO: Vérifier que le deck mélangé comporte toujours 52 cartes sans doublons
}

Card draw_card(Deck *deck) {
    if (deck->top >= DECK_SIZE) {
        printf("Le deck est épuisé !\n");
        // TODO: Gérer le cas d'un deck épuisé en réinitialisant le deck ou en terminant proprement la partie
        exit(1);
    }
    // TODO: Valider que la carte tirée est conforme aux attentes (valeur entre 1 et 13)
    return deck->cards[deck->top++];
}
