#include <iostream>
using namespace std;

#include "chapter4.h"

int main(){
    double height; // 身長
    double weight; // 体重
    double bmi;    // BMI

    // キー入力（身長）
    cout << "身長cmを入力：";
    cin >> height;

    // キー入力（体重）
    cout << "体重kgを入力：";
    cin >> weight;

    // 身長と体重からBMIを計算する
    bmi = getBmi(height, weight);

    // BMIを画面に表示する
    cout << "あなたのBMIは" << bmi << "です" << endl;

    return 0;
}