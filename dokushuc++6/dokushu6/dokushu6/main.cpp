//
//  main.cpp
//  dokushu6
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.演算子オーバロードの制限について説明せよ
 何かしらのクラスに対応させなけらばいけない
 */
/*
 Q2.後置のインクリメント演算子とデクリメント演算子をオーバーロードするには前置のものとどこを変えるか
 後置は変更前の値を返すから、一旦元の値を保存する
 */
/*
 Q3.四則演算ができる整数クラスを作れ
 */
/*
 Q4.コンストラクターで動的確保したオブジェクトのポインターを受け取り、管理するスマートポインターを作れ
 このスマートポインターは、デストラクターでdelete演算子を呼び出して管理しているメモリーを解放せよ
 またアロー演算子と間接参照演算子の演算子オーバロードも追加せよ
 */

#include <iostream>
#include <utility>
#include <memory>
//Q3
class Integer{
    int value;
public:
    Integer(int value):value(value){}
    Integer operator + (const Integer& other);
    Integer operator - (const Integer& other);
    Integer operator * (const Integer& other);
    Integer operator / (const Integer& other);
    void show(){std::cout<< value <<std::endl;}
};

Integer Integer::operator + (const Integer& other){
    return value+other.value;
}
Integer Integer::operator - (const Integer& other){
    return value-other.value;
}
Integer Integer::operator * (const Integer& other){
    return value*other.value;
}
Integer Integer::operator / (const Integer& other){
    return value/other.value;
}

//Q4
class A{
    int value;
public:
    A(int value):value(value){
        std::cout<<"コンストラクター呼び出し"<<std::endl;
    }
    ~A(){
        std::cout<<"デストラクター呼び出し"<<std::endl;
    }

    
    void show(){
        std::cout<<value<<std::endl;
    }
};

class A_observer{
    A* pointer;
public:
    explicit A_observer(A* pointer) : pointer{pointer}{}
    A& operator *()const;
    A* operator ->()const;
};

A& A_observer::operator*()const{
    return *pointer;
}
A* A_observer::operator ->()const{
    return pointer;
}

int main() {
    //Q3
    Integer x=10;
    Integer y=5;
    (x+y).show();
    (x-y).show();
    (x*y).show();
    (x/y).show();
    
    //Q4
    A a{42};
    A_observer pointer{&a};
    (*pointer).show();
    pointer->show();
    
}
