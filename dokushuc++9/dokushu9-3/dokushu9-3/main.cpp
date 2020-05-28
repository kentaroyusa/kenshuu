//
//  main.cpp
//  dokushu9-3
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.クラステンプレートでも仮想関数が使えることを確認せよ
 */
/*
 Q2.関数テンプレートを仮想関数にできない理由を説明せよ
 呼び出すまで型が決まらない関数テンプレートは、定義の段階で型を決めておかないといけない仮想関数には使えない
 */
/*
 Q3.クラステンプレートがstaticメンバー変数を持っていた場合、テンプレートパラメーターが変わるとそのstaticメンバー変数はどうなるか説明せよ
 staticを使うと、同じアドレスに異なる実体が作られるので、値を共有できる
 */
class Base{
public:
    virtual void show_x(){std::cout<<"base x"<<std::endl;}
    virtual void show_y(){std::cout<<"base y"<<std::endl;}
};

template<typename T>
class Derived:public Base{
public:
    T x;
    T y;
public:
    void show_x()override{std::cout<<x<<std::endl;}
    void show_y()override{std::cout<<y<<std::endl;}
    void get(T a,T b){
        x=a;
        y=b;
    }
};

int main() {
    Base b;
    b.show_x();
    b.show_y();
    Derived<int> d;
    d.get(3,4);
    d.show_x();
    d.show_y();
    
}
