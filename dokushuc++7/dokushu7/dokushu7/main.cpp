//
//  main.cpp
//  dokushu7
//
//  Created by Kentaro Yusa on 2020/05/26.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//


/*
 Q1.仮想関数が基底クラスの動作を変えている例を示せ
 */
/*
 Q2.仮想デストラクターが必要な場面はいつか説明せよ
 派生クラスをreturnしているのに、基底クラスの型を戻り値の型にしている場合
 */
/*
 Q3.菱形継承とはどのような継承か説明せよ
 基底クラスの派生クラスが二つあり、その二つのクラスを派生するクラスがある場合
 */
#include <iostream>
class Base{
public:
    virtual void method1(){std::cout<<"Base1"<<std::endl;}
    virtual void method2(){std::cout<<"Base2"<<std::endl;}
};
class Derived :public Base{
public:
    void method1()final{std::cout<<"Derived1"<<std::endl;}
    void method2()override{std::cout<<"Derived2"<<std::endl;}
};

int main() {
    Derived d;
    d.method1();
    d.method2();
    Base b;
    b.method1();
    b.method2();
    Base& b1=d;
    b1.method1();
    b1.method2();
}
