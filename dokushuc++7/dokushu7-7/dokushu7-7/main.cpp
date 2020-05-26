//
//  main.cpp
//  dokushu7-7
//
//  Created by Kentaro Yusa on 2020/05/26.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.それ以上クラスが派生されるのを防ぐにはどうしたらいいか
 派生classをfinal指定する
 */
/*
 Q2.仮想関数を持った基底クラスから派生し、その仮想関数のそれ以上のオーバーライドを禁止したクラスを作れ
 */

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
}
