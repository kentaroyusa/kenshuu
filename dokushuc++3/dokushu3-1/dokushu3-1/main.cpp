//
//  main.cpp
//  dokushu3-1
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.以下がコンパイルできるようにクラスを修正せよ
 class A{
     int v;
 public:
     void set(int value);
     int get();
 };

 void A::set(int value){
     v=value;
 };

 int A::get(){
     return v;
 };

 int main() {
     A a;
     a.set(42);
     const A& ca=a;
     ca.get();
 }
 */
//Q1
class A{
    mutable int v;
public:
    void set(int value);
    int get();
    int get()const;
};

void A::set(int value){
    v=value;
};

int A::get(){
    std::cout<<v<<std::endl;
    
    return v;
};

//Q2
int A::get()const{
     std::cout<<v<<std::endl;
    return v;
};



int main() {
    //Q1
    A a;
    a.set(42);
    const A& ca=a;
    ca.get();
    
}
