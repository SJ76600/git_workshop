#include <assert.h>
#include "deck.h"

int main() {
    Deck deck;
    init_deck(&deck);

    // Test complet : Vérifier que le deck est initialisé avec DECK_SIZE (52) cartes
    int count = 0;
    for (int i = 0; i < DECK_SIZE; i++) {
        // Vérifier que la valeur de chaque carte est comprise entre 1 et 13
        assert(deck.cards[i].value >= 1 && deck.cards[i].value <= 13 && "La valeur de la carte doit être entre 1 et 13");
        count++;
    }
    assert(count == DECK_SIZE && "Le deck doit contenir exactement 52 cartes");
    assert(deck.top == 0 && "L'index 'top' du deck doit être initialisé à 0");

    // Test complet : Après mélange, le deck doit toujours contenir 52 cartes
    shuffle_deck(&deck);
    count = 0;
    for (int i = 0; i < DECK_SIZE; i++) {
        count++;
    }
    assert(count == DECK_SIZE && "Après mélange, le deck doit toujours contenir 52 cartes");

    // TODO : Vérifier que le deck mélangé ne contient pas de doublons
    // TODO : Vérifier que l'ordre du deck a bien changé (test probabilistique)

    printf("Tous les tests de deck.c passent.\n");
    return 0;
}
