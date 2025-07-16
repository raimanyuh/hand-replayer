#pragma once

#include <string>
#include <vector>
#include "Card.h"

struct Player {
    std::string name;
    int seatNumber;              // Seat position around the table
    double stackSize;            // Chips in play
    std::string position;        // "BTN", "SB", "BB", "UTG", etc.
    std::vector<Card> holeCards; // Typically 2 cards
    std::string notes;
};
