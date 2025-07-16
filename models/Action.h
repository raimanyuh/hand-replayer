enum class ActionType { FOLD, CALL, CHECK, BET, RAISE };

struct Action {
    int playerSeat;       // Seat number of acting player
    ActionType type;
    double amount;        // Relevant for bet/raise amounts
    int street;           // 0 = preflop, 1 = flop, 2 = turn, 3 = river
};
