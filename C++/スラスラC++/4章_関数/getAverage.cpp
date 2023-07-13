/* 配列の平均値を返す関数のプロトタイプ宣言 */
double getAverage(const int *a, int length){
    double sum;     // 合計値
    double average; // 平均値
    int i; // ループカウンタ

    // 配列の合計を求める
    sum = 0;
    for(i =0; i<length; i++){
        // ポインタが指し示す要素の値を読み出し集計する
        sum += *a;

        // ポインタを更新する
        a++;
    }

    // 配列の平均値を求める
    average = (double)sum / length;

    // 配列の合計値を返す
    return average;
}