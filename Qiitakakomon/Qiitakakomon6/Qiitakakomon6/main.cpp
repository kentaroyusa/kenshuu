//
//  main.cpp
//  Qiitakakomon6
//
//  Created by Kentaro Yusa on 2020/06/04.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//
/*
【問題概要】
N 枚のカードがあり、i 枚目のカードには ai という数が書かれています。
Alice と Bob はこれらのカードを使ってゲームを行います。ゲームでは 2 人が交互に 1 枚ずつカードを取っていきます。Alice が先にカードを取ります。
2 人がすべてのカードを取ったときゲームは終了し、取ったカードの数の合計がその人の得点になります。2 人とも自分の得点を最大化するように最適戦略をとったとき、Alice は Bob より何点多くの得点を獲得できるかを求めてください。

【制約】

N は 1 以上 100 以下の整数
ai は 1 以上 100 以下の整数
【数値例】
1)
　N=3
　a=(2,7,4)
　答え: 5
以下が最適です:

1 ターン目: Alice が 7 を取る
2 ターン目: Bob が 4 を取る
3 ターン目: Alice が 2 を取る
Alice は 7 + 2 = 9 点、Bob は 4 点を獲得するので、その差は 9 - 4 = 5 点です。

 */

#include <iostream>
#include <algorithm>

int main(int argc, const char * argv[]) {
    int N,sumA=0,sumB=0;
    std::cout<<"INPUT N: "<<std::endl;
    std::cin>>N;
    int a[N+1];
    for(int i=0;i<N;i++){
        std::cout<<"INPUT a["<<i<<"]: "<<std::endl;
        std::cin>>a[i];
    }
    std::sort(a, a+N,std::greater<int>());
    for(int i=0;i<N;i++){
        if(i%2==0){
            std::cout<<i<<" ターン目： Alice が　"<<a[i]<<" を取る"<<std::endl;
            sumA +=a[i];
        }
        else{
            std::cout<<i<<" ターン目： Bob が　"<<a[i]<<" を取る"<<std::endl;
            sumB +=a[i];
        }
    }
    std::cout<<"Alice　は"<<sumA<<" 点、 Bob は　"<<sumB<<" 点獲得するので、その差は　"<<sumA-sumB<<" 点です。"<<std::endl;
}
