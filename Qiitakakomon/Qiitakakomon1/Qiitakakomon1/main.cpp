//
//  main.cpp
//  Qiitakakomon1
//
//  Created by Kentaro Yusa on 2020/06/02.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 【問題概要】

 二つの正整数 a, b が与えられます。 a と b の積が偶数か奇数か判定してください。

 【制約】

 1≤a,b≤10000
 a, b は整数
 【数値例】
 1)
 　a=3
 　b=4
 　答え: Even

 3 × 4 = 12 でこれは偶数なので、"Even" を出力します。

 2)
 　a=1
 　b=21
 　答え: Odd

 1 × 21 = 21 でこれは奇数なので、"Odd" を出力します。
 */

#include <iostream>

int main() {
    int a;
    int b;
    std::cout<<"aの値を入力："<<std::endl;
    std::cin>>a;
    std::cout<<"bの値を入力："<<std::endl;
    std::cin>>b;
    if(a*b%2==0){
        std::cout<<"even"<<std::endl;
    }
    else{
        std::cout<<"odd"<<std::endl;
    }
}
