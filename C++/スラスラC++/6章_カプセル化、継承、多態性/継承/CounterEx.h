/* Counterクラスを継承したCounterExクラスの定義 */
class CounterEx : public Counter{
    public:
        void downVal(); // カウンタの値をダウンするメンバ関数
        CounterEx();    // コンストラクタ
};