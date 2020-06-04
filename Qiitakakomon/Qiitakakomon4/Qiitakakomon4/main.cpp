//
//  main.cpp
//  Qiitakakomon4
//
//  Created by Kentaro Yusa on 2020/06/04.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//


/*
 【問題概要】
 500 円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。これらの硬貨の中から何枚かを選び、合計金額をちょうど X 円にする方法は何通りあるでしょうか？

 【制約】

 0≤A,B,C≤50
 A+B+C≥1
 50≤X≤20000
A,B,C は整数である
 X は 50 の倍数である
 【数値例】
 1)
 　A=2
 　B=2
 　C=2
 　X=100
 　答え: 2
 条件を満たす選び方は以下の 2 通りです。

 500 円玉を 0 枚、100 円玉を 1 枚、50 円玉を 0 枚選ぶ
 500 円玉を 0 枚、100 円玉を 0 枚、50 円玉を 2 枚選ぶ
 */

#include <iostream>

int main() {
    int A,B,C,X;
    std::cout<<"500円玉の枚数入力：A＝"<<std::endl;
    std::cin>>A;
    std::cout<<"100円玉の枚数入力：B＝"<<std::endl;
    std::cin>>B;
    std::cout<<"50円玉の枚数入力：C＝"<<std::endl;
    std::cin>>C;
    if(A+B+C>50){
        std::cout<<"合計50枚オーバーです！"<<std::endl;
    }
    else{
        std::cout<<"合計金額を入力：X＝"<<std::endl;
        std::cin>>X;
        if(X%50 != 0){
            std::cout<<"Xが50の倍数ではありません！"<<std::endl;
        }
        else{
            for(int i=0;i<A+1;i++){
                for(int j=0;j<B+1;j++){
                    for(int k=0;k<C+1;k++){
                        if(500*i+100*j+50*k==X)std::cout<< "500 円玉を "<<i<<" 枚、100 円玉を "<<j<<" 枚、50 円玉を "<<k<<" 枚選ぶ"<<std::endl;
                    }
                }
            }
        }
    }
}
