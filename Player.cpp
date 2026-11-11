#include "Player.h"
#include <iostream>

void Player::showCard(const char* playerName) const {
    const char* suitMarks[] = { "ハート", "ダイヤ", "スペード", "クローバー" };
    std::cout << playerName << " のカード: " << suitMarks[suit] << " の " << number << std::endl;
}