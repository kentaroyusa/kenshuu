//
//  main.cpp
//  dokushu5-4
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.コンストラクターがオーバーロードしている例を作り、new演算子で動的確保した時コンストラクターの呼び分けをせよ
 */
/*
 Q2.Q1を配列で動的確保せよ
 */
class Test
{
public:
    Test();
    Test(int a);
    ~Test();
};

Test::Test(){
    std::cout<<"空のコンストラクター呼び出し"<<std::endl;
}
Test::Test(int a){
    std::cout<<"コンストラクター呼び出し"<<a<<std::endl;
}

Test::~Test(){
    std::cout<<"デストラクター呼び出し"<<std::endl;
}

int main(){
    Test* p = new Test[2]{
        Test{},
        Test{10},
    };
    delete []p;
}
