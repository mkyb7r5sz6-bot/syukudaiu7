#ifndef DEALER_H
#define DEALER_H

#include "Participant.h"

class Dealer : public Participant 
{
public:
    void showCard() const; // ディーラーは名前が固定なので引数なしにする等、個別処理にする
};

#endif