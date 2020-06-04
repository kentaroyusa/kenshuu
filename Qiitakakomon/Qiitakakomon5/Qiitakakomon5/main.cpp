//
//  main.cpp
//  Qiitakakomon5
//
//  Created by Kentaro Yusa on 2020/06/04.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//


/*
 【問題概要】
 1 以上 N 以下の整数のうち、10 進法で各桁の和が A 以上 B 以下であるものについて、総和を求めてください。

 【制約】

 1≤N≤10^4
 1≤A≤B≤36
 入力はすべて整数
 【数値例】
 1)
 　N=20
 　A=2
 　B=5
 　答え: 84
 20 以下の整数のうち、各桁の和が 2 以上 5 以下なのは、2, 3, 4, 5, 11, 12, 13, 14, 20 です。これらの合計である 84 を出力します。

    std::cout<<<<std::endl;
 */
#include <iostream>

int check(int i,int A,int B){
    int sum=0;
    sum += i%10;
    sum += (i/10)%10;
    sum += (i/100)%10;
    sum += (i/1000)%10;
    sum += (i/10000)%10;
    if(sum>=A&&sum<=B){return sum;}
        else{return 0;}
}

int main() {
    int N,A,B,sum=0,j=0;
    std::cout<<"Nを入力（1≦N≦10^4）："<<std::endl;
    std::cin>>N;
    int ok[N];
    if(N<1||N>10001){
        std::cout<<"Nは範囲外（1≦N≦10^4）"<<std::endl;
    }
    else{
        std::cout<<"Aを入力（1≦A≦B≦36）："<<std::endl;
        std::cin>>A;
        std::cout<<"Bを入力（"<<A<<"≦B≦36）："<<std::endl;
        std::cin>>B;
        if(A>0&&B>=A&&B<37){
            for(int i=1;i<N+1;i++){
                if(check(i,A,B)!=0){
                    ok[j]=i;
                    j++;
                    sum += i;
                }
            }
            std::cout<<"N="<<N<<std::endl;
            std::cout<<"A="<<A<<std::endl;
            std::cout<<"B="<<B<<std::endl;
            std::cout<<N<<"以下の整数のうち、各桁の和が "<<A<<" 以上 "<<B<<" 以下なのは、";
            for(int i=0;i<j;i++){
                std::cout<<ok[i]<<" ";
            }
            std::cout<< "です。これらの合計である "<<sum<<" を出力します。"<<std::endl;;
            
        }
        else{}
    }
    
}
