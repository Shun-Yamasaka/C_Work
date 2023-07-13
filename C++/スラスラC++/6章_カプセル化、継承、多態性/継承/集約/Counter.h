class Counter{
    protected:
        int val; // カウンタを格納するメンバ変数
    public:
        void resetVal(); // カウンタの値を０にするメンバ関数
        void upVal();    // カウンタの値をアップするメンバ関数
        int getVal();    // カウンタの値を返すメンバ関数
        Counter();       // コンストラクタ
};