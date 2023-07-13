#include <iostream>
#include <string>
using namespace std;

/******************************************************************/
// 犬を表すクラスの定義
class Dog{
    private:
        string name; // 名前を保持するメンバ変数
    public:
        void speak();     // 名前と鳴き声を表示するメンバ変数
        Dog(string name); // コンストラクタ
};

// 猫を表すクラスの定義
class Cat{
    private:
        string name; // 名前を保持するメンバ変数
    public:
        void speak();     // 名前と鳴き声を表示するメンバ変数
        Cat(string name); // コンストラクタ
};
/******************************************************************/

/******************************************************************/
// 犬を表すクラスの名前と鳴き声を表示するメンバ関数の実装
void Dog::speak(){
    cout << this->name << "：ワン!" << endl;
}

// 犬を表すクラスのコンストラクタ実装
Dog::Dog(string name){
    this->name = name;
}

// 猫を表すクラスの名前と鳴き声を表示するメンバ関数の実装
void Cat::speak(){
    cout << this->name << "：ニャー!" << endl;
}

// 猫を表すクラスのコンストラクタ実装
Cat::Cat(string name){
    this->name = name;
}
/******************************************************************/

int main(){
    // 犬と猫のインスタンスを生成する
    Dog pochi("ポチ");
    Cat tama("タマ");

    // 犬と猫を鳴かせる
    pochi.speak();
    tama.speak();

    return 0;
}