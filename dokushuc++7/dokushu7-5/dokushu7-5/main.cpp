//
//  main.cpp
//  dokushu7-5
//
//  Created by Kentaro Yusa on 2020/05/26.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.2種類の基底クラスを定義し、それを多重継承した派生クラスを作成
 派生クラスがどちらの基底クラスのメンバーを持っていることを確認せよ
 */
/*
 Q2.多重継承した場合、基底クラスのコンストラクター呼び出しの順番はどうなるか
 
 継承のところに書いてある順番にコンストラクターが呼び出される
 */
class BaseA{
public:
    BaseA(){std::cout<<"BaseA constructor"<<std::endl;}
    void showA(){std::cout<<"BaseA"<<std::endl;}
};
class BaseB{
public:
    BaseB(){std::cout<<"BaseB constructor"<<std::endl;}
    void showB(){std::cout<<"BaseB"<<std::endl;}
};
class Derived:public BaseA,public BaseB{
public:
    Derived(){std::cout<<"Derived constructor"<<std::endl;}
};

int main() {
    Derived derived;
    derived.showA();
    derived.showB();
}
