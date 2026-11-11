#include "Participant.h"

Participant::Participant() {
    number = 0;
    suit = 0;
}

void Participant::hit(Shoe* shoe) {
    // Shoeクラスにカードを引く処理を任せる
    int cardID = shoe->takeCard();
    suit = cardID / 13;
    number = (cardID % 13) + 1;
}

int Participant::getNumber() const {
    return number;
}

int Participant::getSuit() const {
    return suit;
}