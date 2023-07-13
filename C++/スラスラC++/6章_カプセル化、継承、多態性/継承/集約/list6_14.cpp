#include <iostream>
#include <string>
using namespace std;
#include "Counter.h"

// 定義（GenderCountBoard.h）
/************************************************************************/
// Counterクラスを集約したGenderCountBoardクラスの定義
class GenderCountBoard{
    private:
        // Counterクラスのインスタンスを持っている（集約）
        Counter male;   // 男性用カウンタを表すメンバオブジェクト
        Counter female; // 女性用カウンタを表すメンバオブジェクト
    public:
        void upMaleCounter();   // 男性用カウンタをアップするメンバ関数
        void upFemaleCounter(); // 女性用カウンタをアップするメンバ関数
        int getMaleCounter();   // 男性用カウンタの値を返すメンバ関数
        int getFemaleCounter(); // 女性用カウンタの値を返すメンバ関数
        GenderCountBoard();     // コンストラクタ
};
/************************************************************************/

// 定義（GenderCountBoard.cpp）
/************************************************************************/
// 男性用カウンタをアップするメンバ関数の実装
void GenderCountBoard::upMaleCounter(){
    this->male.upVal(); // GenderCountBoardのメンバ関数を使って間接的にCounterクラスのメンバ関数を利用する
}

// 女性用カウンタをアップするメンバ関数の実装
void GenderCountBoard::upFemaleCounter(){
    this->female.upVal();
}

// 男性用カウンタの値を返すメンバ関数の実装
int GenderCountBoard::getMaleCounter(){
    return this->male.getVal();
}

// 女性用カウンタの値を返すメンバ関数の実装
int GenderCountBoard::getFemaleCounter(){
    return this->female.getVal();
}

// コンストラクタの実装
GenderCountBoard::GenderCountBoard(){}
/************************************************************************/

/************************************************************************/
int main(){
    // GenderCountBoardクラスのインスタンスを生成する
    GenderCountBoard gcb;

    // 男性用カウンタを2回アップする
    gcb.upMaleCounter();
    gcb.upMaleCounter();

    // 女性用カウンタを3回アップする
    gcb.upFemaleCounter();
    gcb.upFemaleCounter();
    gcb.upFemaleCounter();

    // カウンタの値を表示する
    cout << "男性用カウンタの値 = " << gcb.getMaleCounter() << endl;
    cout << "女性用カウンタの値 = " << gcb.getFemaleCounter() << endl;

    return 0;
}
/************************************************************************/


