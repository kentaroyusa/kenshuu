//
//  main.cpp
//  dokushu3-9
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.staticメンバーと通常メンバーの違い
 Staticをつけるとクラス内でしか変更できなくな理、Staticメンバー変数、関数は特定のインスタンスに結びつかない
 Q2.整数型のstaticメンバー変数countを持ったクラスを作り、コンストラクターが呼ばれるたびにcountに1を足し、インスタンスが生成された回数を数えよ。またcountを取得するstaticメンバー関数も定義せよ。
 */
class S{
    static int count;
public:
    S();
    static void show();
};
int S::count=0;
S::S(){
    count++;
}
void S::show(){
    std::cout<<count<<std::endl;
}


int main() {
    S s;
    s.show();
    S t;
    S::show();
    t.show();
}
