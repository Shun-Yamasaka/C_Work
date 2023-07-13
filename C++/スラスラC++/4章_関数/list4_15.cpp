#include <iostream>
#include <string>
using namespace std;
#include "chapter4.h"

int main(){
    const int DATA_NUM = 3;
    // HealthCheck構造体をデータ型とした配列
    HealthCheck people[DATA_NUM]= {
        {"山田一郎", 170, 67.5, 0},
        {"佐藤花子", 160, 54.5, 0},
        {"鈴木次郎", 180, 85.5, 0}
    };
    double mHeight;
    int i;

    // 配列の要素を順番に処理する
    for(i = 0; i < DATA_NUM; i++){
        // BMIを求める
        /*
        mHeight = people[i].height / 100;
        people[i].bmi = people[i].weight / mHeight / mHeight;
        */
        people[i].bmi = getBmi(&people[i]);

        // BMIを表示する
        cout << people[i].name << "さんのBMIは、" << people[i].bmi << "です" << endl;
    }

    return 0;
}