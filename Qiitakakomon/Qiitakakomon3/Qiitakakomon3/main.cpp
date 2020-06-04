//
//  main.cpp
//  Qiitakakomon3
//
//  Created by Kentaro Yusa on 2020/06/02.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 【問題概要】
 黒板に N 個の正の整数 A1,…,ANが書かれています。
 すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます。

 黒板に書かれている整数すべてを，2 で割ったものに置き換える。
 すぬけ君は最大で何回操作を行うことができるかを求めてください。

 【制約】

 1≤N≤200
 1≤Ai≤10^9
 【数値例】
 1)
 　N=3
 　A=(16,12,24)
 　答え: 2
 1 回操作を行うと (8, 6, 12) になります。2 回操作を行うと (4, 3, 6) になります。2 個目の 3 が奇数なため 3 回目の操作は行えません。
 */

#include <iostream>


int main() {
    int N;
    int A[201];
    int count=0;
    int flg=0;
    std::cout<<"Nを入力："<<std::endl;
    std::cin>>N;
    for(int i=0;i<N;i++){
        std::cout<<"A["<<i<<"]を入力："<<std::endl;
        std::cin>>A[i];
    }
    do{
        for(int i=0;i<N;i++){
            if(A[i]%2==1){
                flg=1;
                break;
            }
            A[i]=A[i]/2;
        }
        if(flg==1)break;
        count++;
    }while(1);
    std::cout<<"答え："<<count<<std::endl;
}
