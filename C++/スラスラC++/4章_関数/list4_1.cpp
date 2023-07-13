/*-------------------------------*/
/* 平方根を画面に表示するプログラム */
/*-------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double data; // 平方根を求める数値
    double ans;  // dataの平方根

    // 数値をキー入力
    cout << "平方根を求める数値：";
    cin >> data;

    // sqrt関数
    ans = sqrt(data);

    cout << ans << endl;

    return 0;
}