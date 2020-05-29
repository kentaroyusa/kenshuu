//
//  main.cpp
//  dokushu11-1
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <typeinfo>

/*
 Q1.RTTIを使って、定義が全く同じのラムダ式っが異なる型を持っていることを確認せよ
 */
/*
 Q2.継承関係のある２つのクラス用意し、基底クラスの参照型を受け取る関数の中で受け取った参照の実体が派生クラスであるか確認せよ
 */

class Base{
    
};
class Derived:public Base{
    
};
void get_base(Base* b){
    if(typeid(*b)==typeid(Derived)){
        std::cout<<"bとDerivedは一致"<<std::endl;
    }
    else{
        std::cout<<"bとDerivedは不一致"<<std::endl;
    }
}
int main() {
    //Q1
    auto lamuda=[](){
    };
    auto lamuda1=[](){
    };
    if(typeid(lamuda1)==typeid(lamuda)){
        std::cout<<"lamudaとlamuda1は一致"<<std::endl;
    }
    else {
        std::cout<<"lamudaとlamuda1は不一致"<<std::endl;
    }
    
    //Q2
    Base b;
    get_base(&b);
}
