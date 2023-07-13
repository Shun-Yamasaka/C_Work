/*------------------------------------------*/
/* HealthCheckerクラスの定義                 */
/* メンバ関数とコンストラクタのプロトタイプ宣言 */
/*------------------------------------------*/
class HealthChecker{
    private:
        string name;   // 氏名を格納するメンバ変数
        double height; // 身長を格納するメンバ変数
        double weight; // 体重を格納するメンバ変数
        double bmi;    // BMIを格納するメンバ変数
    public:
        double getBmi(); // BMIを返すメンバ関数
        string getName(); // 氏名を返すメンバ関数
        HealthChecker(string name, double height, double weight); // コンストラクタ
};