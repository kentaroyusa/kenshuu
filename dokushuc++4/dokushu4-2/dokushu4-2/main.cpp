//
//  main.cpp
//  dokushu4-2
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.前方宣言を追加せよ
 int main() {
     sum(10,5);
 }
 int sum(int lhs,int rhs){
     return lhs+rhs;
 }
 //Q1
 int sum(int,int);

 int main() {
     sum(10,5);
 }
 int sum(int lhs,int rhs){
     return lhs+rhs;
 }
 */

/*
 Q2.以下のプログラムのクラスAのメンバー関数全てを、クラス内で定義するように書き換えよ
 class A{
     int m_v;
 public:
     explicit A(int);
     int v() const;
 };
 A::A(int v):m_v(v){}
 int A::v() const{
     return m_v;
 }
 int main() {
     A x(42);
     std::cout<<x.v()<<std::endl;
 }
 */
class A{
    int m_v;
public:
    explicit A(int v):m_v(v){};
    int v() const{return m_v;};
};

int main() {
    A x(42);
    std::cout<<x.v()<<std::endl;
}

