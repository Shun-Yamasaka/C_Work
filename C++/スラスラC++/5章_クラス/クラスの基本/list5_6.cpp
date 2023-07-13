#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main(){
    // HealthCheckerクラスのインスタンスを生成する
    HealthChecker yamada("山田一郎", 170, 67.5);

    // BMIの値を表示する
    cout << yamada.getName() <<"さんBMIは" << yamada.getBmi() << "です" << endl;

    return 0;
}