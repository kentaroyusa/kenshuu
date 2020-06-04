//
//  main.cpp
//  Qiitakakomon8
//
//  Created by Kentaro Yusa on 2020/06/04.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 【問題概要】
 10000 円札と、5000 円札と、1000 円札が合計で N 枚あって、合計金額が Y 円であったという。このような条件を満たす各金額の札の枚数の組を 1 つ求めなさい。そのような状況が存在し得ない場合には -1 -1 -1 と出力しなさい。

 【制約】

 1≤N≤2000
 1000≤Y≤2∗107
 N は整数
 Y は 1000 の倍数
 【数値例】
 1)
 　N=9
 　Y=45000
 　答え: (4,0,5) など

 10000 円札 4 枚と 1000 円札 5 枚で、合計枚数が 9 枚、合計金額が 45000 円になります。他の答えもあります。


 */

#include <iostream>

int main() {
    int N,Y,flg=0;
    std::cout<<"INPUT N(1<=N<=2000):"<<std::endl;
    std::cin>>N;
    std::cout<<"INPUT Y(1000<=Y<=2*10^7):"<<std::endl;
    std::cin>>Y;
    
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N-i;j++){
            for(int k=0;k<=N-j-i;k++){
                if(i*10000+j*5000+k*1000==Y){
                    std::cout<<"("<<i<<","<<j<<","<<k<<")"<<std::endl;
                    flg+=1;
                }
            }
        }
    }
    if(flg==0)std::cout<<"(-1,-1,-1)"<<std::endl;
}
