/* 犬と猫による多態性のサンプルプログラム */
#include <iostream>
#include <string>
using namespace std;

/******************************************************************/
// 動物を表すクラスの定義（抽象クラス）
class Animal{
    protected:
        string name; // 名前を保持するメンバ変数
    public:
        virtual void speak() = 0; // 名前と鳴き声を表示するメンバ関数（純粋仮想関数：処理内容がない関数）
        Animal(string name);      // コンストラクタ
};

/******************************************************************/
// 犬を表すクラスの定義
class Dog:public Animal{
    public:
        void speak();     // 名前と鳴き声を表示するメンバ変数
        Dog(string name); // コンストラクタ
};

// 猫を表すクラスの定義
class Cat:public Animal{
    public:
        void speak();     // 名前と鳴き声を表示するメンバ変数
        Cat(string name); // コンストラクタ
};
/******************************************************************/

/******************************************************************/
// 動物を表すクラスのコンストラクタの実装
Animal::Animal(string name){
    this->name = name;
}

// 犬を表すクラスの名前と鳴き声を表示するメンバ関数の実装
void Dog::speak(){
    cout << this->name << "：ワン!" << endl;
}

// 犬を表すクラスのコンストラクタ実装
Dog::Dog(string name):Animal(name){
}

// 猫を表すクラスの名前と鳴き声を表示するメンバ関数の実装
void Cat::speak(){
    cout << this->name << "：ニャー!" << endl;
}

// 猫を表すクラスのコンストラクタ実装
Cat::Cat(string name):Animal(name){
}

// Animalクラスのポインタを引数としたsub関数
void sub(Animal *p){
    /*--------------------------------------------------------------*/
    // Animalクラスは、DogクラスとCatクラスを汎化したものなので、       */
    // Animalクラスのポインタには、Dogクラスのインスタンスのポインタでも */
    // Catクラスのポインタでも、どちらでも渡すことができる。             */
    /*--------------------------------------------------------------*/
    p->speak();
}
/******************************************************************/

int main(){
    // 犬と猫のインスタンスを生成する
    Dog pochi("ポチ");
    Cat tama("タマ");

    // 犬と猫を鳴かせる
    sub(&pochi);
    sub(&tama);

    return 0;
}