//
//  main.cpp
//  dokushu6-6
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//
/*
 Q1.添字演算子を使うとどのようなことができるか
 配列のような複数ある要素の中から特定の要素にアクセスできる
 */

#include <iostream>

class Array{
    int buffer[100];
public:
    int& operator[](int index);//添字演算子
    std::size_t size()const{return 100;}
};

int& Array::operator[](int index){
    return buffer[index];
}

int main() {
    Array array;
    for(std::size_t i=0;i<array.size();i++){
        array[i]=i;
    }
    std::cout<<array[30]<<std::endl;
}
