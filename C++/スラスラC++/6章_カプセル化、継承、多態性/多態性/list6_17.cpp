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
    const int DATA_NUM = 5; // 配列の要素数
    Animal *p[DATA_NUM]; // 抽象クラスのポインタの配列

    // 配列にDogクラスとCatクラスのインスタンスを格納する
    p[0] = new Dog("ポチ");
    p[1] = new Cat("タマ");
    p[2] = new Dog("シロ");
    p[3] = new Cat("ミケ");
    p[4] = new Dog("クロ");

    // 動物を順番に鳴かせる
    for(int i=0; i < DATA_NUM; i++){
        p[i]->speak();
        delete p[i];
    }

    return 0;
}