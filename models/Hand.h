#include <string>
#include <vector>
#include "Card.h"
#include "Player.h"
#include "Action.h"

struct Hand {
    std::string gameType;         // "NLHE", "PLO", etc.
    double smallBlind;
    double bigBlind;
    std::vector<Player> players;
    std::vector<Action> actions;
    std::vector<Card> board;      // Up to 5 cards (community cards)
    std::string handId;           // Optional unique ID
};
