double getBmi(double height, double weight){
    double bmi; // BMI計算結果

    // cm単位をmに変換
    height /= 100;

    // BMIを計算する
    bmi = weight / height / height;

    // 戻り値としてBMIを返す
    return bmi;
}