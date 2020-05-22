//
//  main.cpp
//  dokushu5-3
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

class Test
{
public:
    Test();
    ~Test();
};

Test::Test(){
    std::cout<<"コンストラクター呼び出し"<<std::endl;
}

Test::~Test(){
    std::cout<<"デストラクター呼び出し"<<std::endl;
}

int main(){
    Test* p = new Test();
    delete(p);
}

