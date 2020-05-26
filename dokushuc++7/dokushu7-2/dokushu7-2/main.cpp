//
//  main.cpp
//  dokushu7-2
//
//  Created by Kentaro Yusa on 2020/05/26.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.派生クラスと基底クラスのコンストラクター、デストラクターがどのように呼ばれているか確認せよ
 Base コンストラクター
 Derived コンストラクター
 Derived デストラクター
 Base デストラクター
 
 Q2.派生クラスのコンストラクターから、基底クラスの引数があるコンストラクターを呼び出せ
 */

class Base{
public:
    Base(){
        std::cout<<"Base コンストラクター"<<std::endl;
    }
    explicit Base(int n){
        std::cout<<"Base 引数付きコンストラクター"<<std::endl;
    }
    ~Base(){
        std::cout<<"Base デストラクター"<<std::endl;
    }
};

class Derived : Base{
public:
    Derived(){
        std::cout<<"Derived コンストラクター"<<std::endl;
    }
    explicit Derived(int n):Base{n}{
        std::cout<<"Derived 引数付きコンストラクター"<<std::endl;
    }
    ~Derived(){
        std::cout<<"Derived デストラクター"<<std::endl;
    }
};

int main() {
        Derived a;
    Derived b(2);

}
