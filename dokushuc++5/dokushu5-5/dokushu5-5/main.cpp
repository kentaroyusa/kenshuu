//
//  main.cpp
//  dokushu5-5
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include<initializer_list>
/*
 Q1.次のプログラムがエラーになる理由は何か
 int main() {
     double d=0.0;
     float f{d};
 }
 宣言時にdouble型をfloat型に{}で縮小変換するのは禁止されているから
 */
/*
 Q2.std::initializer_list<int>を受け取るコンストラクターを定義し、std::initializer_listの中身を列挙せよ
 */
class A{
    std::size_t m_size;
    int* m_array;
public:
    A(std::initializer_list<int> init);
    ~A();
    
    std::size_t size()const{
        return m_size;
    }
    int at(int n)const{
        return m_array[n];
    }
};

A::A(std::initializer_list<int> init) : m_size{ init.size() },m_array{new int [init.size()]}{
    for(std::size_t i=0;i<init.size();++i){
        m_array[i]= *init(i) ;
    }
        
        //std::cout<<a_array[i]<<std::endl;
}
        A::~A(){
        delete [] m_array;
        }

int main() {
    A iv={0,1,2,3,4,5};
    std::cout<<iv.size()<<std::endl;
    std::cout<<iv.at(3)<<std::endl;
}
