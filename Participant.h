#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include "Shoe.h"

class Participant {
protected: // 子クラスからアクセスできるようprotectedにする
    int number;
    int suit;

public:
    Participant();
    virtual ~Participant() {} // 継承を使う際の安全なデストラクタ
    void hit(Shoe* shoe);     // Shoeのポインタを受け取る
    int getNumber() const;
    int getSuit() const;
};

#endif