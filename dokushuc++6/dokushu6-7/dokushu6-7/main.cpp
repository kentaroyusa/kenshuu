//
//  main.cpp
//  dokushu6-7
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.std::unique_ptrはどのような機能を提供しているか
 関数スコープが終了した後もデストラクターが呼び出されないスマートポインター
 */

#include <iostream>
#include <memory>
#include <utility>

class A{
public:
    A(){
        std::cout<<"コンストラクター"<<std::endl;
    }
    ~A(){
        std::cout<<"デストラクター"<<std::endl;
    }
};

std::unique_ptr<A>allocate(){
    std::cout<<"allocate()"<<std::endl;
    std::unique_ptr<A> ptr{new A{}};
    return std::move(ptr);
}

int main() {
    {
        std::unique_ptr<A> ptr;
        std::cout<<"関数呼び出し前"<<std::endl;
        ptr = allocate();
        std::cout<<"関数呼び出し後"<<std::endl;
    }
    std::cout<<"スコープの後"<<std::endl;
}
