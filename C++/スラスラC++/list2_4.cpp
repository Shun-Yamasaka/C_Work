/* BMIを求めるプログラム */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*------------------*/
    /* 定数定義/変数宣言 */
    /*------------------*/
    const int STD_BMI = 22;  // 標準BMI
    double height;           // 身長
    double weight;           // 体重
    double bmi;              // BMI
    double stdWeight;        // 標準体重

    /*----------*/
    /* 数値入力 */
    /*----------*/
    // キー入力をheightに格納する（身長）
    cout << "input height(cm):";
    cin >> height;
    height /= 100; // cm単位からm単位に変換
    // キー入力をweightに格納する（体重）
    cout << "input weight(kg):";
    cin >> weight;

    /*----------*/
    /* 演算処理 */
    /*----------*/
    // 身長と体重からBMIを計算する
    bmi = weight / height / height;
    // 標準体重を計算する
    stdWeight = STD_BMI * height * height;

    /*----------*/
    /* 結果出力 */
    /*----------*/
    // BMIを画面に表示する（小数点以下1桁で表示）
    cout << "BMI=" << fixed << setprecision(1) << bmi << endl;
    // 標準体重を画面に表示する
    cout << "STD_Weight=" << stdWeight << endl;

    return 0;
}