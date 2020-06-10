//
//  main.cpp
//  phisicsLab3-1
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 [1] 配列 (二項係数)
 茲では、漸化式を用いて二項係数を計算します。

 nCr=n－1Cr－1＋n－1Cr

 (1) 二次元配列
 二次元配列の中で漸化式を用いて二項係数を計算し、50C0 ～ 50C50 を出力して下さい。

 ↓ この問題で想定している二次元配列の使い方

 0C0    ⋯                    1C0    1C1                    2C0    2C1    2C2                3C0    3C1    3C2    3C3            4C0    4C1    4C2    4C3    4C4    ⋯    ⋮                ⋮

 (2) 一次元配列
 一次元配列の中で漸化式を用いて二項係数を計算して、(1) と同様の物を出力して下さい。

 一次元配列の中で計算を行う場合には、

 始めは、nCr の n=0 の行を配列内に用意します。
 n=k の行が配列内にある時に、配列の内容を n=k+1 の内容に更新します。
 ヒント
 nCn , nCn－1 , nCn－2 , ⋯, nC0 の順番に計算すれば、 nCr を求めた時点で、n－1Cr は要らなくなります。
 */

#include <iostream>
using namespace std;
int main() {
    //(1)
    int nCr[100][100]={0};
    for(int i=1;i<=50;i++){
        for(int j=0;j<=i;j++){
            nCr[i][j]=nCr[i-1][j-1]+ nCr[i-1][j];
            if(i==50)cout<<nCr[i][j]<<" ";
            if(j==50)cout<<endl;
        }
    }
    cout<<endl;
    
    //(2)
    int ncr[100]={0};
    ncr[0]=1;
    for(int i=1;i<=50;i++){
        for(int j=i;j>0;j--){
            ncr[j]=ncr[j-1]+ ncr[j];
            if(j==1)ncr[j-1]=1;
            if(i==50)cout<<ncr[j]<<" ";
            if(j==50)cout<<endl;
        }
    }
    cout<<endl;
}
