//
//  main.cpp
//  dokushu6-8
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//


/*
 Q1.関数呼び出し演算子をオーバーロードしたクラスから作られたオブジェクトのことを特になんと呼ぶか
 関数オブジェクト
 */
#include <iostream>

class Counter{
    int value;
public:
    Counter():value{0}{}
    int operator()();
    int operator()(int n);
    void show() const{std::cout<<value<<std::endl;}
};
int Counter::operator()(){
    return value++;
}
int Counter::operator()(int n){
    return value+=n;
}
        
int main() {
    Counter c;
    c(3);
    c.show();
    c();
    c.show();
}
