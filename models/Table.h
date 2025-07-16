#include <vector>
#include "Player.h"

struct Table {
    int maxSeats = 10;
    std::vector<Player> seats;   // Player list
};
