#include "Shoe.h"
#include <iostream>
#include <cstdlib>

Shoe::Shoe() 
{
    currentCardIndex = 0;
    resetDeck();
}

void Shoe::resetDeck() 
{
    for (int i = 0; i < 52; i++) 
    {
        deck[i] = i;
    }
    for (int i = 51; i > 0; i--) 
    {
        int j = rand() % (i + 1);
        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
    currentCardIndex = 0;
    std::cout << "--- 山札がリセット（シャッフル）されました ---" << std::endl << std::endl;
}

int Shoe::takeCard() 
{
    // 山札が52枚すべて引かれていたらリセット
    if (currentCardIndex >= 52) 
    {
        resetDeck();
    }
    int cardID = deck[currentCardIndex];
    currentCardIndex++;
    return cardID;
}