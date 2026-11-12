#include "Dealer.h"
#include <iostream>

void Dealer::showCard() const 
{
    const char* suitMarks[] = { "ハート", "ダイヤ", "スペード", "クローバー" };
    std::cout << "ディーラー のカード: " << suitMarks[suit] << " の " << number << std::endl;
}