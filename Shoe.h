#ifndef SHOE_H
#define SHOE_H

class Shoe {
private:
    int deck[52];
    int currentCardIndex;
    void resetDeck(); // 外部から直接呼ばれないようprivateにする

public:
    Shoe();
    int takeCard(); // カードを1枚引く（枯渇時は自動リセット）
};

#endif