#include "headers/Game.hpp"
#include "headers/HighScore.hpp"
#include "headers/Screens.hpp"

int main() {
    Game game {State::begin};
    HighScore high_score {State::begin};
    Screens screens {State::begin};

    // Attach observers
    game.attach(&high_score);
    game.attach(&screens);

    game.begin();

    // Detach high score observer
    game.detach(&high_score);

    game.end();
}
