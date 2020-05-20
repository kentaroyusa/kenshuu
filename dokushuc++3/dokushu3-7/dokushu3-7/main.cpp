//
//  main.cpp
//  dokushu3-7
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.クラスと構造体の違い
 クラスのデフォルトのアクセス指定がprivateに対し、構造体はpublic
 Q2.共用体でできないことはなんでしょう、例を示せ
 継承することができない
 Q3.グローバルスコープで無名共用体を使うにはどう宣言するか
 staticを使う必要がある
 */

class A{
    int i;
public:
    virtual void set_i(int i);
    virtual int get_i();
};
void A::set_i(int i){
    this->i=i;
}
int A::get_i(){
    return this->i;
}


class B : public A{
    int i;
public:
    void set_i(int i) override;
    int get_i() override;
};


void B::set_i(int i){
    this->i=i;
}
int B::get_i(){
    return this->i;
}



int main() {
    B v;
    v.set_i(10);
    std::cout<<v.get_i()<<std::endl;
    
}
