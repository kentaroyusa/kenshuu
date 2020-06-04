//
//  main.cpp
//  Qittakakomon7
//
//  Created by Kentaro Yusa on 2020/06/04.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 【問題概要】
 N 個の整数 d[0],d[1],…,d[N−1] が与えられます。
 この中に何種類の異なる値があるでしょうか？
 (原問題文をかなり意訳していますが、題意はこういうことです)

 【制約】

 1≤N≤100
 1≤d[i]≤100
 入力値はすべて整数
 【数値例】
 1)
 　N=2
 　Q=3
 　d=(8,10,8,6)
 　答え: 3
 6, 8, 10 の 3 種類です。
 */

#include <iostream>
#include <set>

int main() {
    int N;
    std::cout<<"INPUT N: "<<std::endl;
    std::cin>>N;
    int d[N+1];
    std::set<int> s;
    for(int i=0;i<N;i++){
        std::cout<<"INPUT d["<<i<<"]: "<<std::endl;
        std::cin>>d[i];
        s.insert(d[i]);
    }
    std::cout<<s.size()<<std::endl;
    
}
