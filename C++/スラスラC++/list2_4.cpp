/* BMIを求めるプログラム */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*----------*/
    /* 変数宣言 */
    /*----------*/
    double height; // 身長
    double weight; // 体重
    double bmi;    // BMI

    /*----------*/
    /* 数値入力 */
    /*----------*/
    // キー入力をheightに格納する
    cout << "input height(m):";
    cin >> height;
    // キー入力をweightに格納する
    cout << "input weight(kg):";
    cin >> weight;

    /*----------*/
    /* 演算処理 */
    /*----------*/
    // 身長と体重からBMIを計算する
    bmi = weight / height / height;

    /*----------*/
    /* 結果出力 */
    /*----------*/
    // BMIを画面に表示する（小数点以下1桁で表示）
    cout << "BMI=" << fixed << setprecision(1) << bmi << endl;

    return 0;
}