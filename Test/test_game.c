#include <assert.h>
#include "game.h"

int main() {
    Game game;
    init_game(&game);

    // Test complet : Vérifier que la distribution initiale respecte les règles de base
    assert(game.player_card_count == 2 && "Le joueur doit avoir 2 cartes initialement");
    assert(game.dealer_card_count == 1 && "Le croupier doit avoir 1 carte initialement");

    // Test complet : Vérifier que le score initial du joueur est raisonnable
    int score_player = compute_score(game.player_cards, game.player_card_count);
    // Le score devrait être minimum de 2 (par exemple 1+1 ajusté à 11+? ou 1+2, etc.)
    assert(score_player >= 2 && score_player <= 22 && "Le score initial du joueur est incorrect");

    // TODO : Tester la fonction player_hit
    //  - Vérifier qu'après un appel à player_hit le nombre de cartes du joueur augmente de 1
    //  - Vérifier que le score du joueur est correctement recalculé

    // TODO : Tester la fonction dealer_play
    //  - Vérifier que le croupier tire des cartes jusqu'à atteindre un score d'au moins 17
    //  - Tester le comportement en cas de dépassement de 21 ("bust")

    printf("Tous les tests partiels de game.c passent.\n");
    return 0;
}
