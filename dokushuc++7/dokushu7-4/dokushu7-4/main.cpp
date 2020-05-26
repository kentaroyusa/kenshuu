//
//  main.cpp
//  dokushu7-4
//
//  Created by Kentaro Yusa on 2020/05/26.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.仮想関数を持つ基底クラスと、その基底クラスから派生した派生クラスを使って、基底クラスのポインターから仮想関数を呼び出すと派生クラスでオーバーライドしたメンバー関数が呼び出されることを確認せよ
 */
/*
 Q2.基底クラスの非公開仮想関数は派生クラスでオーバーライドできるか確認せよ
 */
/*
 Q3.仮想デストラクターが必要になる例を示せ
 */

class Base{
    virtual void private_method(){std::cout<<"Base 非公開method"<<std::endl;}
public:
    virtual void method(){std::cout<<"Base method"<<std::endl;}
    
    virtual ~Base(){
        std::cout<<"~Base()"<<std::endl;
    }
};

class Derived:public Base{
public:
    ~Derived(){
        std::cout<<"~Derived()"<<std::endl;
    }
    
    void method() override{std::cout<<"Derived method"<<std::endl;}
    void private_method()override{std::cout<<"Derived 非公開method override"<<std::endl;}
};

Base* allocate(){
    return new Derived{};
}

int main() {
    Derived derived;
    Base& base=derived;
    base.method();
    derived.private_method();
    auto ptr=allocate();
    delete ptr;
}
