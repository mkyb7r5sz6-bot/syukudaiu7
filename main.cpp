#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Shoe.h"
#include "Player.h"
#include "Dealer.h"

using namespace std;

// Participantクラスのポインタを受け取る通常関数（アップキャストの活用）
void showParticipantCard(const Participant* p) {
    const char* suitMarks[] = { "ハート", "ダイヤ", "スペード", "クローバー" };
    cout << "[共通関数で確認] 手持ちのカード: "
        << suitMarks[p->getSuit()] << " の " << p->getNumber() << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    // Shoeを生成（コンストラクタで自動的にシャッフルされる）
    Shoe shoe;

    cout << "=== ハイカードゲーム 開始 ===" << endl << endl;

    Player player;
    Dealer dealer;

    // Shoeのポインタを渡してカードを引く
    player.hit(&shoe);
    dealer.hit(&shoe);

    // 各クラスの個別メソッドで表示
    player.showCard("プレイヤー");
    dealer.showCard();
    cout << endl;

    // アップキャストを利用した通常関数にそれぞれのポインタを渡す
    cout << "--- アップキャスト関数のテスト ---" << endl;
    showParticipantCard(&player); // Player* から Participant* へ暗黙変換
    showParticipantCard(&dealer); // Dealer* から Participant* へ暗黙変換
    cout << endl;

    // 勝敗判定
    if (player.getNumber() > dealer.getNumber()) {
        cout << "【結果】プレイヤー の勝ち！" << endl;
    }
    else if (player.getNumber() < dealer.getNumber()) {
        cout << "【結果】ディーラー の勝ち！" << endl;
    }
    else {
        cout << "【結果】引き分け！" << endl;
    }

    cout << endl << "=== ゲーム終了 ===" << endl;

    return 0;
}