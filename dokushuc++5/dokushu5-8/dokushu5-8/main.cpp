//
//  main.cpp
//  dokushu5-8
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <utility>
/*
 Q1.右辺値参照を受け取る関数を定義し、何かの変数を実印数にして呼び出せ
 void show(int& v){
     std::cout<<"int &v"<<v<<std::endl;
 }
 void show(int&& v){
     std::cout<<"int &&v"<<v<<std::endl;
 }

 int main() {
     int v=1;
     show(v);
     show(42);
 }

 */
/*
 Q2.ムーブコンストラクターとコピーコンストラクターを定義し呼び分けろ
 */
class A{
    int value;
public:
    explicit A(int value):value(value){};
    A(A &other);
    A(A&& other);
    int show(){return value;}
    
};

A::A(A &other):value(other.value){
    other.value=-1;
}

A::A(A&& other):value(other.value){
    other.value=-1;
}

int main(){
    A B(20);
    std::cout<<B.show()<<std::endl;
    A D(B);
    A C(std::move(B));
    std::cout<<C.show()<<std::endl;
    std::cout<<B.show()<<std::endl;
    std::cout<<D.show()<<std::endl;
    std::cout<<D.show()<<std::endl;
}
