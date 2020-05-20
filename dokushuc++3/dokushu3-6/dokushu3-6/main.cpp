//
//  main.cpp
//  dokushu3-6
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.thisポインターが必要となるのはどの場面か
 仮引数とメンバー変数の名前が一致した時
 Q2.thisポインターが必要になるクラスとメンバー関数を作成し、thisを使った時と使わなかった時を比較せよ
 thisを使うと理想的な結果になるが、使わないと初期値になる
 Q3.thisポインターが指す先のオブジェクトを変更できない場合はどの場合か
 main関数でthisを用いて、メンバー関数やconstしていないメンバー関数
 */
//Q2
class A{
    int value=0;
public:
    void set_value(int value);
    int get_value();
};

void A::set_value(int value){
    value=value;
}

int A::get_value(){
    return value;
}

int main() {
    A v;
    v.set_value(42);
    std::cout<<v.get_value()<<std::endl;
}
