//
//  main.cpp
//  dokushu7-3
//
//  Created by Kentaro Yusa on 2020/05/26.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.派生クラスのポインターを基底クラスのポインターに代入するとどうなるか
 基底クラスのメンバーしか参照できない
 */

class Base{
public:
    Base(){
        std::cout<<"Base コンストラクター"<<std::endl;
    }

    ~Base(){
        std::cout<<"Base デストラクター"<<std::endl;
    }
    void Base_method(){std::cout<<"Base_method"<<std::endl;}
};

class Derived : public Base{
public:
    Derived(){
        std::cout<<"Derived コンストラクター"<<std::endl;
    }

    ~Derived(){
        std::cout<<"Derived デストラクター"<<std::endl;
    }
    void Derived_method(){std::cout<<"Derived_method"<<std::endl;}
};

int main() {
    Derived derived;
    derived.Base_method();
    derived.Derived_method();
    Base* base=&derived;
    (*base).Base_method();
}
