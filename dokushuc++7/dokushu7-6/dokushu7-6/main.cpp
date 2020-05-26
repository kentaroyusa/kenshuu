//
//  main.cpp
//  dokushu7-6
//
//  Created by Kentaro Yusa on 2020/05/26.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.菱形継承を行い、基底クラスの引数を受け取るコンストラクターが呼び出されるようにし、どこのコンストラクターが呼び出しを行われたかわかるようにせよ
 */

class Base{
public:
    Base(int n){std::cout<<"Base"<<n<<std::endl;}
};

class DerivedA : virtual public Base{
    public:
    DerivedA(int n):Base{n}{std::cout<<"DerivedA"<<n<<std::endl;}
};
class DerivedB : virtual public Base{
    public:
        DerivedB(int n):Base{n}{std::cout<<"DerivedB"<<n<<std::endl;}
};

class More_Derived :  public DerivedA, public DerivedB{
    public:
    More_Derived(int n):DerivedA{n},DerivedB{n},Base{n}{std::cout<<"More_Derived"<<n<<std::endl;}
};

int main() {
    More_Derived d(2);
    Base b(5);
}
