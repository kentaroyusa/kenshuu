//
//  main.cpp
//  dokushu5-10
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.次のプログラムを動くようにせよ
 class A{
     int value=0;
 public:
     void set(int value){this->value=value;}
     void foo();
 };

 void A::foo(){
     auto lambda=[](){
         std::cout<<value<<std::endl;
     };
     lambda();
 }
 int main() {
     A a;
     a.set(42);
     a.foo();
 }
 */

/*
 Q2.インスタンス全体のコピーをキャプチャして、thisポインターのキャプチャと動作が違うことを確認せよ
 */
class A{
    int value=0;
public:
    void set(int value){this->value=value;}
    void foo();
    
    A copy_all(A B);
};

void A::foo(){
    auto lambda=[this](){
        std::cout<<value<<std::endl;
    };
    lambda();
}

A　A::copy_all(A B){
    [*this]()mutable{
        std::cout<< value <<std::endl;
    }();
    return B;
}

int main() {
    A a;
    a.set(42);
    a.foo();
    A b = a.copy_all(a);
}
