//
//  main.cpp
//  dokushu11
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.RTTIとは何の略語で、どいった機能か
 RunTimeTypeInformationの略で、実行時のオブジェクトの型について調べる機能
 */
/*
 Q2.dynamic_castを使ってダウンキャストせよ
 */
class Base{
public:
    virtual ~Base(){};
    void show(){
        std::cout<<"Base"<<std::endl;
    }
};
class Derived:public Base{
public:
    void show(){
        std::cout<<"Derived"<<std::endl;
    }
};

int main() {
    Base b;
    b.show();
    Derived* d=dynamic_cast<Derived*>(&b);
    d->show();
}
