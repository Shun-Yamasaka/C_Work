#include <iostream>
using namespace std;
#include "chapter4.h"

int main(){
    double a, b, c; // 係数
    double x1, x2; // 二次方程式の解
    bool ans; // 解があるか判定用

    // 二次方程式の係数をキー入力
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    // quadEq関数を呼び出す
    ans = quadEq(a, b, c, &x1, &x2);

    if(ans){
        // 解があれば表示する
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }else{
        // 解がない場合
        cout << "解なし" << endl;
    }

    return 0;
}