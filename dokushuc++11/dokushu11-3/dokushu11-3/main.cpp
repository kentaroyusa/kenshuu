//
//  main.cpp
//  dokushu11-3
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.static_castを使ってダウンキャストせよ
 */
/*
 Q2.dynamic_castを使ってダウンキャストせよ
 ただしこの時ダウンキャストは失敗するようにせよ
 */
class Base{
public:
    virtual ~Base(){}
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
class MoreDerived:public Derived{
public:
    void show(){
        std::cout<<"More Derived"<<std::endl;
    }
};
int main() {
    //Q1
    Base b;
    b.show();
    Derived* d=static_cast<Derived*>(&b);
    d->show();
    
    //Q2
    Derived d1;
    Base* pb=&d1;
    MoreDerived* m = dynamic_cast<MoreDerived*>(pb);
    if(m){
        std::cout<<"sucssess"<<std::endl;
    }
    else{
        std::cout<<"fail"<<std::endl;
    }
    
}
