/****************************/
/* カウンタを表すクラスの実装 */
/****************************/
#include "Counter.h"

// カウンタの値を０にするメンバ関数
void Counter::resetVal(){
    this->val = 0;
}

// カウンタの値をアップする饗場関数
void Counter::upVal(){
    this->val++;
}

// カウンタの値を返すメンバ関数
int Counter::getVal(){
    return this->val;
}

// コンストラクタ
Counter::Counter(){
    this->resetVal();
}