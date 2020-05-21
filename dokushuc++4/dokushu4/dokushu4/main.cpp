//
//  main.cpp
//  dokushu4
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.前方宣言を使うと何ができるか
 定義を後に書くことができる
 */
/*
 Q2.コンパイルして出来上がったものを１つにまとめて実行可能にするツールはなにか
 リンカー
 */
/*
 Q3.引数で受け取った整数の次の整数を変えすnext()関数をインライン関数で定義せよ
 */
/*
 Q4.三重程度にネストした名前空間に適当なメッセージを表示する関数を定義し、その名前空間の別名を作って呼び出せ
 */
/*
 Q5.インクルードガードの例を示せ
 #infdef ABC....
 #define ABC....
 */
inline int next(int a){
    return a+1;
}
namespace A {
namespace B{
namespace C{
void show_hello(){
    std::cout<<"hello"<<std::endl;
}
}
}
}

int main() {
    std::cout<<next(2)<<std::endl;
    A::B::C::show_hello();
    #define hello A::B::C::show_hello
    hello();
    
}
