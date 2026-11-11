#ifndef PLAYER_H
#define PLAYER_H

#include "Participant.h"

class Player : public Participant {
public:
    void showCard(const char* playerName) const;
};

#endif